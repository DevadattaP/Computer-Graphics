#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
    int gd=DETECT,gm,x1,y1,x2,y2,x,y,dx,dy,d,i;
    printf("Enter values of x1,y1,x2,y2: ");
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    dx=x2-x1;
    dy=y2-y1;
    d=2*dy-2*dx;
    x=x1;
    y=y1;
    initgraph(&gd,&gm,"c:\\turboc3\\bgi");
    for(i=0;i<=dx;i++,x++)
    {
        putpixel(x,y,4);
        if(d<0)
	        d=d+2*dy;
        else
        {
	        y++;
	        d=d+2*dy-2*dx;
        }
    }
    getch();
}