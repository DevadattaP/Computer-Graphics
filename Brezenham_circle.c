#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
    int gd=DETECT,gm,r,x,y,d;
    printf("Enter radius of circle: ");
    scanf("%d",&r);
    d=3-2*r;
    y=r;
    initgraph(&gd,&gm,"c:\\turboc3\\bgi");
    for(x=0;x<=y;x++)
    {
        putpixel(x+100,y+100,4);
        putpixel(x+100,-y+100,5);
        putpixel(-x+100,y+100,6);
        putpixel(-x+100,-y+100,7);
        putpixel(y+100,x+100,8);
        putpixel(y+100,-x+100,9);
        putpixel(-y+100,x+100,10);
        putpixel(-y+100,-x+100,11);
        if(d<0)
	        d=d+4*x+6;
        else
        {
            d=d+4*x-4*y+10;
            y--;
        }
    }
    getch();
}