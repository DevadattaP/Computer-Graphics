#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void bdfill(int x,int y,int bdcol,int filcol)
{
  if((getpixel(x,y)!=bdcol)&&(getpixel(x,y)!=filcol))
  {
    putpixel(x,y,filcol);
    bdfill(x+1,y,bdcol,filcol);
    bdfill(x-1,y,bdcol,filcol);
    bdfill(x,y+1,bdcol,filcol);
    bdfill(x,y-1,bdcol,filcol);
  }
}
void main()
{
  int gd=DETECT,gm;
  clrscr();
  initgraph(&gd,&gm,"c:\\turboc3\\bgi");
  rectangle(100,100,120,120);
  bdfill(110,110,15,4);
  getch();
}