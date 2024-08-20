#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
  int gd=DETECT,gm;
  float x,y,d1,d2,dx,dy,rx,ry;
  clrscr();
  printf("Enter x and y radii of ellipse: ");
  scanf("%f%f",&rx,&ry);
  x=0;
  y=ry;
  d1=(ry*ry)-(rx*rx*ry)+(rx*rx/4);
  dx=2*ry*ry*x;
  dy=2*rx*rx*y;
  //printf("   x\ty\tdx\tdy\td\n");
  initgraph(&gd,&gm,"c:\\turboc3\\bgi");
do  {
    putpixel(x+100,y+100,4);
    putpixel(x+100,-y+100,4);
    putpixel(-x+100,y+100,4);
    putpixel(-x+100,-y+100,4);
    //printf("%d\t%d\t%d\t%d\t%d\t\n",x,y,dx,dy,d1);
    if(d1<0)
    {
      x=x+1;
      y=y;
      dx=dx+(2*ry*ry);
      d1=d1+dx+(ry*ry);
      //d1+=2*ry*ry*x+ry*ry;
    }
    else
    {
      x=x+1;
      y=y-1;
      dx=dx+(2*ry*ry);
      dy=dy-(2*rx*rx);
      d1=d1+dx-dy+(ry*ry);
      //d1+=2*ry*ry*x+ry*ry-2*rx*rx;
    }

   delay(100);
  }while(dy>dx);
  d2=((x+1/2)*(x+1/2)*ry*ry)+((y-1)*(y-1)*rx*rx)-(rx*rx*ry*ry);
  do
  {
    putpixel(x+100,y+100,4);
    putpixel(x+100,-y+100,4);
    putpixel(-x+100,y+100,4);
    putpixel(-x+100,-y+100,4);
    //printf("%d\t%d\t%d\t%d\t%d\t\n",x,y,dx,dy,d2);
    if(d2<0)
    {
      y=y-1;
      x=x+1;
      dx=dx+(2*ry*ry);
      dy=dy-(2*rx*rx);
      d2=d2+dx-dy+(rx*rx);
      //d2+=2*ry*ry*x-2*rx*rx*y+rx*rx;
    }
    else
    {
      y=y-1;
      x=x;
      dy=dy-(2*rx*rx);
      d2=d2-dy+(rx*rx);
      //d2-=2*rx*rx*y+rx*rx;
    }

   delay(100);
  }while(y>=0);
  getch();
}
