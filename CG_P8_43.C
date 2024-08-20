#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
void main()
{
  float x1,y1,x2,y2,xwmin,ywmin,xwmax,ywmax,m,tx1=0,tx2=0,ty1=0,ty2=0;
  int c1[4]={0,0,0,0},c2[4]={0,0,0,0};
  int gd=DETECT,gm,i,count=0;
  clrscr();
  printf("Enter end points of line (x1,y1,x2,y2): ");
  scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
  printf("Enter coordinates of clipping window (xwmin,ywmin,xwmax,ywmax): ");
  scanf("%f%f%f%f",&xwmin,&ywmin,&xwmax,&ywmax);
  initgraph(&gd,&gm,"c:\\turboc3\\bgi");
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
	printf("%d",c1[i]);
  printf("\n");
  for(i=0;i<4;i++)
	printf("%d",c2[i]);
  printf("\n");
  for(i=0;i<4;i++)
  {
    if(c1[i]==0 && c2[i]==0)
	count++;
  }
  if(count==4)
  {	printf("Line is completely inside clipping window, no need to clip.\n");
	tx1=x1;
	tx2=x2;
	ty1=y1;
	ty2=y2;
  }
  else
  {
	count=0;
	for(i=0;i<4;i++)
	{
		if(c1[i]==1 && c2[i]==1)
			count++;
	}
	if(count!=0)
	{
		printf("Line is completely outside clipping window, no need to clip, just discard line.\n");

	}
	else
	{
		printf("Line is partly inside,partly outside clipping window, we need to clip line.\n");
		if(x1<xwmin || x1>xwmax)
		{
			if(x1<xwmin)
				tx1=xwmin;
			if(x1>xwmax)
				tx1=xwmax;
			ty1=y1+m*(tx1-x1);

			if(ty1<ywmin || ty1>ywmax)
			{
				if(y1<ywmin)
					ty1=ywmin;
				if(y1>ywmax)
					ty1=ywmax;
				tx1=x1+(1/m)*(ty1-y1);
			}
		}
		if(x1>xwmin && x1<xwmax)
		{
			if(y1>ywmin &&y1<ywmax)
			{
				tx1=x1;
				ty1=y1;
			}
			else
			{
				if(y1<ywmin)
					ty1=ywmin;
				if(y1>ywmax)
					ty1=ywmax;
				tx1=x1+(1/m)*(ty1-y1);
			}
		}
		if(x2<xwmin || x2>xwmax)
		{
			if(x2<xwmin)
				tx2=xwmin;
			if(x2>xwmax)
				tx2=xwmax;
			ty2=y1+m*(tx2-x1);
			if(ty2<ywmin || ty2>ywmax)
			{
				if(y2<ywmin)
					ty2=ywmin;
				if(y2>ywmax)
					ty2=ywmax;
				tx2=x1+(1/m)*(ty2-y1);
			}
		}
		if(x2>xwmin && x2<xwmax)
		{
			if(y2>ywmin &&y2<ywmax)
			{
				tx2=x2;
				ty2=y2;
			}
			else
			{
				if(y2<ywmin)
					ty2=ywmin;
				if(y2>ywmax)
					ty2=ywmax;
				tx2=x1+(1/m)*(ty2-y1);
			}
		}
		printf("New end points of line are: ");
		printf("(%f,%f),(%f,%f)",tx1,ty1,tx2,ty2);
	}
	getch();
	cleardevice();
	setcolor(15);
	rectangle(xwmin,ywmin,xwmax,ywmax);
	setcolor(4);
	line(x1,y1,x2,y2);
	getch();
	cleardevice();
	setcolor(15);
	rectangle(xwmin,ywmin,xwmax,ywmax);
	setcolor(4);
	line(tx1,ty1,tx2,ty2);
	}
	getch();
}