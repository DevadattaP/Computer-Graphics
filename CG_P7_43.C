#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main()
{
  int gd=DETECT,gm,i,n;
  float a[10][2],b[10][2],tx,ty,sx,sy,th,xp,yp,shx,shy;
  clrscr();
  printf("Enter number of vertices: ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    printf("Enter x,y coordinates of vertices: ");

    scanf("%f%f",&a[i][0],&a[i][1]);
  }
  a[n][0]=a[0][0];
  a[n][1]=a[0][1];
  printf("Enter tx and ty: ");
  scanf("%f%f",&tx,&ty);
  printf("Enter sx and sy: ");
  scanf("%f%f",&sx,&sy);
  printf("Enter angle of rotation: ");
  scanf("%f",&th);
  printf("Enter xp,yp: ");
  scanf("%f%f",&xp,&yp);
  printf("Enter shx,shy: ");
  scanf("%f%f",&shx,&shy);
  initgraph(&gd,&gm,"c:\\turboc3\\bgi");
  for(i=0;i<n;i++)
	line(a[i][0],a[i][1],a[i+1][0],a[i+1][1]);
  for(i=0;i<=n;i++)
  {
    b[i][0]=a[i][0]+tx;
    b[i][1]=a[i][1]+ty;
  }
  for(i=0;i<n;i++)
	line(b[i][0],b[i][1],b[i+1][0],b[i+1][1]);
  for(i=0;i<=n;i++)
  {
    b[i][0]=a[i][0]*sx;
    b[i][1]=a[i][1]*sy;
  }
  for(i=0;i<n;i++)
	line(b[i][0],b[i][1],b[i+1][0],b[i+1][1]);
  th=th*3.142/180;
  for(i=0;i<=n;i++)
  {
    b[i][0]=a[i][0]*cos(th) - a[i][1]*sin(th);
    b[i][1]=a[i][0]*sin(th) + a[i][1]*cos(th);
  }
  for(i=0;i<n;i++)
	line(b[i][0],b[i][1],b[i+1][0],b[i+1][1]);
  for(i=0;i<=n;i++)
  {
    b[i][0]=a[i][0]*cos(th) - a[i][1]*sin(th) +xp -xp*cos(th)+yp*sin(th);
    b[i][1]=a[i][0]*sin(th) + a[i][1]*cos(th) +yp -xp*sin(th)-yp*cos(th);
  }
  for(i=0;i<n;i++)
	line(b[i][0],b[i][1],b[i+1][0],b[i+1][1]);
  for(i=0;i<=n;i++)
  {
    b[i][0]=a[i][0]+a[i][1]*shx;
    b[i][1]=a[i][1];
  }
  for(i=0;i<n;i++)
	line(b[i][0],b[i][1],b[i+1][0],b[i+1][1]);
  for(i=0;i<=n;i++)
  {
    b[i][0]=a[i][0];
    b[i][1]=a[i][1]+a[i][0]*shy;
  }
  for(i=0;i<n;i++)
	line(b[i][0],b[i][1],b[i+1][0],b[i+1][1]);
  getch();
}