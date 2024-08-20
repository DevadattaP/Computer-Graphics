#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main()
{
  int gd=DETECT,gm,i;
  float x,y,x1,y1,x2,y2,dx,dy,length;
  clrscr();
  printf("Enter coordinates:x1 ,y1, x2, y2: ");
  scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
  dx=abs(x2-x1);
  dy=abs(y2-y1);
  length=(dx>dy)?dx:dy;
  dx=(x2-x1)/length;
  dy=(y2-y1)/length;
  x=x1;
  y=y1;
  initgraph(&gd,&gm,"C:\\turboc3\\bgi");
  for(i=0;i<=length;i++,x+=dx,y+=dy)
  {
    putpixel(x,y,4);
  }
  getch();
}