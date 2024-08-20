#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void bezier(float xa,float ya,float xb,float yb,float xc,float yc,float xd,float yd,int n)
{
  float xab,yab,xbc,ybc,xcd,ycd,xabc,yabc,xbcd,ybcd,xabcd,yabcd;
  xab=(xa+xb)/2;
  yab=(ya+yb)/2;
  xbc=(xc+xb)/2;
  ybc=(yc+yb)/2;
  xcd=(xd+xc)/2;
  ycd=(yd+yc)/2;
  xabc=(xab+xbc)/2;
  yabc=(yab+ybc)/2;
  xbcd=(xcd+xbc)/2;
  ybcd=(ycd+ybc)/2;
  xabcd=(xabc+xbcd)/2;
  yabcd=(yabc+ybcd)/2;
  n--;
  if(n==0)
  {
    line(xa,ya,xb,yb);
    line(xb,yb,xc,yc);
    line(xc,yc,xd,yd);
  }
  else
  {
    bezier(xa,ya,xab,yab,xabc,yabc,xabcd,yabcd,n);
    bezier(xabcd,yabcd,xbcd,ybcd,xcd,ycd,xd,yd,n);
  }
}
void main()
{
  int n,gd=DETECT,gm;
  float xa,ya,xb,yb,xc,yc,xd,yd;
  clrscr();
  printf("Enter coordinatedd of 4 control points:\n");
  printf("xa,ya: ");
  scanf("%f%f",&xa,&ya);
  printf("xb,yb: ");
  scanf("%f%f",&xb,&yb);
  printf("xc,yc: ");
  scanf("%f%f",&xc,&yc);
  printf("xd,yd: ");
  scanf("%f%f",&xd,&yd);
  printf("Enter number of steps: ");
  scanf("%d",&n);
  initgraph(&gd,&gm,"c:\\turboc3\\bgi");
  bezier(xa,ya,xb,yb,xc,yc,xd,yd,n);
  getch();
}