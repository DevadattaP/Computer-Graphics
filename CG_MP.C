#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<math.h>
#include<dos.h>
void Earth();
void Tree();
void Sun();
void cloud();
void Initial();
void Final();
void cut();
void main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	Tree();
	Sun();
	Earth();
	Initial();
	getch();
	cleardevice();
	Sun();
	cut();
	Earth();
	//cloud();
	Final();
	getch();
	cleardevice();
	closegraph();
}
void Earth()
{
	float x,y;
	x=(getmaxx()/2)-120;
	y=(getmaxy()/2)+80;
	setcolor(WHITE);
	setfillstyle(SOLID_FILL, BLUE);
	circle(x,y,150);
	floodfill(x, y, WHITE);
	setfillstyle(SOLID_FILL, GREEN);
	ellipse(259, 188, 45, 275, 10, 5);
	ellipse(259, 203, 230, 85, 5, 10);
	arc(255, 220, 80, 285, 10);
	ellipse(270, 230, 180, 340, 13, 7);
	arc(285, 245, 275, 95, 13);
	ellipse(265, 255, 165, 330, 25, 4);
	ellipse(245, 305, 95, 305, 40, 50);
	ellipse(267, 364, 300, 90, 7, 16);
	line(269, 379, 279, 388);
	ellipse(282, 410, 340, 115, 5, 25);
	line(286, 420, 281, 445);
	floodfill(250, 188, WHITE);
}
void Tree()
{
	int y,x;
	setcolor(BROWN);
	setfillstyle(SOLID_FILL, BROWN);
	line(160, 75, 160, 174);
	line(183, 75, 183, 172);
	for(y=75;y<=174;y++)
	{
		line(160, y, 183, y);
	}
	rectangle(100, 115, 120, 220);
	for(y=100; y<=220; y++)
	{
		line(100, y, 120, y);
	}
	rectangle(230, 115, 250, 180);
	for(y=100; y<=220; y++)
	{
		line(230, y, 250, y);
	}

	setcolor(YELLOW);
	setfillstyle(SOLID_FILL, GREEN);
	ellipse(70, 100, 90, 270, 20, 10);
	ellipse(90, 90, 0, 180, 20,10);
	ellipse(130, 90, 0, 180, 20, 10);
	ellipse(150, 100, 270, 90, 20, 10);
	ellipse(110, 100, 180, 0, 60, 15);

	ellipse(200, 100, 90, 270, 20, 10);
	ellipse(220, 90, 0, 180, 20, 10);
	ellipse(260, 90, 0, 180, 20, 10);
	ellipse(280, 100, 270, 90, 20, 10);
	ellipse(240, 100, 180, 0, 60, 15);

	ellipse(132, 60, 90, 270, 20, 10);
	ellipse(172, 50, 0, 180, 40, 15);
	ellipse(212, 60, 270, 90, 20, 10);
	ellipse(172, 60, 180, 0, 60, 15);

	floodfill(200, 55, YELLOW);
	floodfill(110, 100, YELLOW);
	floodfill(240, 95, YELLOW);
}
void cut()
{
	int y,x;
	setcolor(BROWN);
	setfillstyle(SOLID_FILL, BROWN);
	rectangle(160, 120, 183, 174);
	for(y=120;y<=174;y++)
	{
		line(160, y, 183, y);
	}
	rectangle(100, 180, 120, 220);
	for(y=180; y<=220; y++)
	{
		line(100, y, 120, y);
	}
	rectangle(230, 150, 250, 180);
	for(y=150; y<=220; y++)
	{
		line(230, y, 250, y);
	}
}
void Initial()
{
	int y, i;
	//Thermometer;
	setcolor(WHITE);
	setfillstyle(SOLID_FILL, WHITE);
	line(400, 200, 415, 200);
	line(415, 200, 415, 384);
	line(400, 200, 400, 384);
	circle(407, 400, 20);
	floodfill(410, 300, WHITE);
	floodfill(410, 410, WHITE);
	setcolor(GREEN);
	rectangle(405, 210, 410, 385);
	for(y=385;y>330;y--)
	{
		line(405,y,410,y);
	}
	setcolor(GREEN);
	setfillstyle(SOLID_FILL, GREEN);
	circle(407, 400, 15);
	floodfill(407, 400, GREEN);
	setcolor(WHITE);
	//face
	ellipse(130, 270, 0, 360, 5, 15);
	ellipse(170, 270, 0, 360, 5, 15);
	ellipse(150, 300, 190, 350, 40, 30);
	//clouds
	setcolor(8);
	setfillstyle(SOLID_FILL, WHITE);
	line(40, 380, 122, 380);
	arc(49, 368, 38, 230, 15);
	arc(83, 358, 10, 180, 24);
	arc(112, 368, 310, 130, 15);
	floodfill(49, 368, 8);

	setcolor(8);
	setfillstyle(SOLID_FILL, WHITE);
	line(285, 240, 380, 240);
	arc(294, 228, 38, 230, 15);
	arc(330, 218, 3, 180, 24);
	ellipse(367, 228, 310, 130, 20, 15);
	floodfill(294, 228, 8);

	setcolor(8);
	setfillstyle(SOLID_FILL, WHITE);
	line(274, 370, 380, 370);
	ellipse(284, 363, 38, 230, 15, 10);
	ellipse(315, 355, 3, 180, 20, 24);
	ellipse(350, 356, 3, 170, 15, 15);
	ellipse(373, 363, 315, 130, 12, 10);
	floodfill(284, 363, 8);
}
void Final()
{
	int y, i;
	//clouds
	setcolor(8);
	setfillstyle(SOLID_FILL, WHITE);
	line(40, 380, 122, 380);
	arc(49, 368, 38, 230, 15);
	arc(83, 358, 10, 180, 24);
	arc(112, 368, 310, 130, 15);
	floodfill(49, 368, 8);

	setcolor(8);
	setfillstyle(SOLID_FILL, WHITE);
	line(274, 370, 380, 370);
	ellipse(284, 363, 38, 230, 15, 10);
	ellipse(315, 355, 3, 180, 20, 24);
	ellipse(350, 356, 3, 170, 15, 15);
	ellipse(373, 363, 315, 130, 12, 10);
	floodfill(284, 363, 8);

	//Thermo
	setcolor(WHITE);
	circle(407,400,20);
	setfillstyle(SOLID_FILL, WHITE);
	line(400,200,415,200);
	line(415,200,415,384);
	line(400,200,400,384);
	floodfill(410, 300, WHITE);
	floodfill(410, 410, WHITE);
	setcolor(GREEN);
	rectangle(405, 210, 410, 381);
	for(y=381;y>330;y--)
	{
		line(405,y,410,y);
	}
	while(y==330)
	{
		setcolor(WHITE);
		//face
		ellipse(130, 270, 0, 360, 5, 15);
		ellipse(170, 270, 0, 360, 5, 15);
		line(120, 310, 180, 310);

		setcolor(YELLOW);
		setfillstyle(SOLID_FILL, YELLOW);
		circle(407, 400, 15);
		floodfill(407, 400, YELLOW);
		rectangle(405, 210, 410, 385);
		for(y=385;y>330;y--)
		{
			line(405,y,410,y);
		}

		for(y=330;y>270;y--)
		{
			delay(50);
			line(405,y,410,y);
		}
		cleardevice();
		Sun();
		cut();
		Earth();
		setcolor(8);
		setfillstyle(SOLID_FILL, WHITE);
		line(40, 380, 122, 380);
		arc(49, 368, 38, 230, 15);
		arc(83, 358, 10, 180, 24);
		arc(112, 368, 310, 130, 15);
		floodfill(49, 368, 8);
	}
	//thermo
	setcolor(WHITE);
	circle(407,400,20);
	setfillstyle(SOLID_FILL, WHITE);
	line(400,200,415,200);
	line(415,200,415,384);
	line(400,200,400,384);
	floodfill(410, 300, WHITE);
	floodfill(410, 410, WHITE);
	setcolor(RED);
	circle(407, 400, 15);
	rectangle(405, 210, 410, 385);
	setfillstyle(SOLID_FILL, RED);
	floodfill(407, 400, RED);
	for(y=385;y>330;y--)
	{
		line(405,y,410,y);
	}
	for(y=330;y>270;y--)
	{
		line(405,y,410,y);
	}
	while(y==270)
	{
		//face
		setcolor(WHITE);
		ellipse(130, 270, 0, 360, 5, 15);
		ellipse(170, 270, 0, 360, 5, 15);
		ellipse(150, 330, 10, 170, 40, 30);
		//mercury rise
		for(y=270;y>210;y--)
		{
			setcolor(RED);
			delay(50);
			line(405,y,410,y);
		}
	}
	/*delay(1500);
	line(getmaxx()/2, getmaxy()/2-50, (getmaxx()/2)-100, (getmaxy()/2)+50);
	*/
	//display text
	delay(2000);
	cleardevice();
	setbkcolor(WHITE);
	setcolor(GREEN);
	settextstyle(TRIPLEX_FONT, HORIZ_DIR, 4);
	//settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
	setusercharsize(3, 1, 3, 1);
	outtextxy(100, 100, "Save Trees,");
	outtextxy(100, 200, "Save Life !");
}
void cloud()
{
	int i;
	for(i=0; i>-50; i=i-5)
	{
		setcolor(8);
		setfillstyle(SOLID_FILL, WHITE);
		line(40+i, 380, 122+i, 380);
		arc(49+i, 368, 38, 230, 15);
		arc(83+i, 358, 10, 180, 24);
		arc(112+i, 368, 310, 130, 15);
		floodfill(49+i, 368, 8);
		delay(200);
		clearviewport();
		cut();
		Earth();
		Sun();
	}
}
void Sun()
{
	setcolor(YELLOW);
	setfillstyle(SOLID_FILL, YELLOW);
	circle(530, 120, 50);
	floodfill(530, 120, YELLOW);
	setcolor(YELLOW);
	line(430, 120, 630, 120);
	line(430, 119, 630, 119);
	line(530, 20, 530, 220);
	line(529, 20, 529, 220);
	line(600, 190, 460, 50);
	line(601, 190, 461, 50);
	line(460, 190, 600, 50);
	line(459, 190, 599, 50);
}





