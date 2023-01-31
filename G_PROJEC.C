
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<stdlib.h>


void main()
{
	int i=0;
	int p,j;
	int x[50],y[50];
	int gd=DETECT,gm;
	initgraph(&gd,&gm, "c:\\turboc3\\BGI");

	for(p=0;p<=50;p++)
	{
		x[p] = rand()%getmaxx();
		y[p] = rand()%getmaxy();
	}

	for(i=0;i<=800;i++)
	{
		for(p=0;p<=50;p++)
		{
			putpixel(x[p],y[p],15);
		}
		//setcolor(GREEN);
		setlinestyle(0,3,2);
	       //	floodfill(2,410,15);
		rectangle(0,400,570,440);      //baseline
		rectangle(550,50,560,400);     //pole_part1
		rectangle(500,50,550,60);      //pole_part2
		line(505,60,500,70);           //pole_part3
		line(510,60,515,70);           //pole_part4
		line(500,70,515,70);           //pole_part5


		line(10,350,10,380);      //body
		line(10,380,0,400);       //leg1
		line(10,380,20,400);      //leg2
		line(10,355,25,355);      //hands
		rectangle(25,350,30,355); //gun_part_1
		rectangle(25,345,45,350); //gun_part_2
		circle(10,340,10);        //head

		circle(45+i,347,2);         //moving bullet

		if (i<=400)
		{

			line(500,350,500,380);      //victim_body
			line(500,380,490,400);      //victim_leg1
			line(500,380,510,400);      //victim_leg2
			line(500,355,490,375);      //victim_hand1
			line(500,355,510,375);      //victim_hand2
			circle(500,340,10);         //victim_head


		}

		else if (i>400 && i<=450)
		{

			line(520,360,500,380);      //victim_body
			line(500,380,490,400);      //victim_leg1
			line(500,380,510,400);      //victim_leg2
			line(520,360,500,360);      //victim_hand1
			line(520,360,520,380);      //victim_hand2
			circle(525,355,10);         //victim_head

		}

		else if (i>450 && i<=500)
		{
			line(530,370,500,380);      //victim_body
			line(500,380,490,400);      //victim_leg1
			line(500,380,510,400);      //victim_leg2
			line(530,370,510,360);      //victim_hand1
			line(530,370,550,380);      //victim_hand2
			circle(535,365,10);         //victim_head

		}
		else if (i>500 && i<=550)
		{
			line(525,360,500,380);      //victim_body
			line(500,380,490,400);      //victim_leg1
			line(500,380,510,400);      //victim_leg2
			line(525,360,540,350);      //victim_hand1
			line(525,360,520,390);      //victim_hand2
			circle(533,363,10);         //victim_head

		}
		else
		{

			line(500,350,500,380);      //victim_body
			line(500,380,490,400);      //victim_leg1
			line(500,380,510,400);      //victim_leg2
			line(500,355,490,375);      //victim_hand1
			line(500,355,510,375);      //victim_hand2
			circle(500,340,10);         //victim_head
		}

		delay(4);
		cleardevice();
	}
	getch();
	closegraph();
}