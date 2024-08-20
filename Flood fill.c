#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void bdfill(int x,int y,int oldcol,int newcol)
{
  if(getpixel(x,y)==oldcol)
  {
    putpixel(x,y,filcol);
    bdfill(x+1,y,oldcol,newcol);
    bdfill(x-1,y,oldcol,newcol);
    bdfill(x,y+1,oldcol,newcol);
    bdfill(x,y-1,oldcol,newcol);
  }
}
void main()
{
  int gd=DETECT,gm;
  clrscr();
  initgraph(&gd,&gm,"c:\\turboc3\\bgi");
  rectangle(100,100,120,120);
  bdfill(110,110,0,4);
  getch();
}