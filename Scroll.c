#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
    int x;
    textcolor(4);
    textbackground(15);
    // cprintf("Hello Devadatta!");
    // gotoxy(71,23);
    // cprintf("Ratnagiri\n");
    // cprintf("position: %d , %d",wherex(),wherey());
    for(x=0;!kbhit();x++)
    {
        if(x==65)
	        x=0;
        gotoxy(x,10);
        cprintf("Welcome\nDevadatta");
        delay(100);
        clrscr();
    }
    getch();
}