#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
void main()
{
	float x1,y1,x2,y2,m,xwmin,ywmin,xwmax,ywmax,flag;
	int i,c1[4]={0,0,0,0},c2[4]={0,0,0,0},gd=DETECT,gm,count=0;
	clrscr();

	printf("\n Enter endpoints of the line: ");
	scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
	printf("\ Enter values of xwmin,ywmin and xwmax,ywmax: ");
	scanf("%f%f%f%f",&xwmin,&ywmin,&xwmax,&ywmax);
	m=(y2-y1)/(x2-x1);
	if(x1<xwmin)
		c1[3]=1;
	if(x1>xwmax)
		c1[2]=1;
	if(y1<ywmin)
		c1[1]=1;
	if(y1>ywmax)
		c1[0]=1;
	if(x2<xwmin)
		c2[3]=1;
	if(x2>xwmax)
		c2[2]=1;
	if(y2<ywmin)
		c2[1]=1;
	if(y2>ywmax)
		c2[0]=1;
	for(i=0;i<4;i++)
	{
		if(c1[i]==c2[i] && c1[i]==0)
		count++;
	}
	if(count==4)
		printf("\n The line is completly inside the clipping window.");
	else
	{
		count=0;
		for(i=0;i<4;i++)
		{
			if(c1[i]==1 && c2[i]==1)
			count++;
		}
		if(count!=0)
			printf("\n Line is completly outside");
		else
		{
			initgraph(&gd,&gm,"C:\\turboc3\\bgi");
			rectangle(xwmin,ywmin,xwmax,ywmax);
			line(x1,y1,x2,y2);
			getch();
			cleardevice();

			printf("\n Line is partly inside partly outside and needs to clip.");
			if(x1<xwmin || x1>xwmax)
			{
				if(x1<xwmin)
				  x1=xwmin;
				if(x1>xwmax)
				  x1=xwmax;
				y1=y2+m*(x1-x2);
				printf("x1y1=%f%f",x1,y1);
			}if(y1<ywmin || y1>ywmax)
			{
				if(y1<ywmin)
				  y1=ywmin;
				if(y1>ywmax)
				  y1=ywmax;
				x1=x2+(y1-y2)/m;
				printf("\nx1y1=%f%f",x1,y1);
			}
			 if(x2<xwmin || x2>xwmax)
			{
				if(x2<xwmin)
				  x2=xwmin;
				if(x2>xwmax)
				  x2=xwmax;
				y2=y1+m*(x2-x1);
			}

			 if(y2<ywmin || y2>ywmax)
			{
				if(y2<ywmin)
				  y2=ywmin;
				if(y2>ywmax)
				  y2=ywmax;
				x2=x1+(1/m)*(y2-y1);
			}
			printf("%f%f%f%f",x1,y1,x2,y2);
			rectangle(xwmin,ywmin,xwmax,ywmax);
			line(x1,y1,x2,y2);
			getch();
			cleardevice();
		}
	}
	getch();
}