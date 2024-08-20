#include<stdio.h>
#include<conio.h>
#include "D:\Programming\CG\INCLUDE\GRAPHICS.H"
void main()
{
  int gd=DETECT,gm;
  clrscr();
  initgraph(&gd,&gm,"D:\\Programming\\CG\\BGI");
  arc(100,100,0,180,50);
  arc(105,100,0,90,40);
  arc(95,100,90,180,40);
  line(95,60,95,100);
  line(95,100,55,100);
  line(105,60,105,100);
  line(105,100,145,100);
  arc(50,125,90,180,25);
  arc(150,125,0,90,25);
  circle(57,127,20);
  circle(143,127,20);
  line(84,125,116,125);
  line(25,125,32,125);
  line(175,125,168,125);
  arc(58,125,0,180,26);
  arc(142,125,0,180,26);
  getch();
}
