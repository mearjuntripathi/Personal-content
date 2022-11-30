// Moving Car
// Coded and Compiled by
// Arjun Tripathi
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
void destination(char name[])
{
int gdriver = DETECT,gmode,color;
int x=412,y=405,i;
	initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
	start:
	color=random(113);
	for(i=1;i<=640;i=i+15)
	{
		//car
      setfillstyle(SOLID_FILL,8);
      bar(0,350,getmaxx(),412);
      setfillstyle(1,color);
      line(0+i,400,24+i,400);
      line(38+i,400,73+i,400);
      line(88+i,400,110+i,400);
      line(110+i,400,110+i,385);
      line(110+i,385,90+i,380);
      line(90+i,380,65+i,365);
      line(65+i,365,35+i,365);
      line(35+i,365,10+i,380);
      line(10+i,380,0+i,380);
      line(0+i,380,0+i,400);
      arc(30+i,400,0,180,7);
      arc(80+i,400,0,180,7);
      line(0,350,639,350);
      line(0,412,639,412);
      floodfill(1+i,398,15);
	 // windo
     setfillstyle(1,7);
     line(25+i,382,50+i,382);
     line(40+i,370,50+i,370);
     line(40+i,370,25+i,382);
     line(60+i,370,80+i,382);
     line(50+i,370,50+i,382);
     line(52+i,370,52+i,382);
     line(52+i,370,60+i,370);
     line(52+i,382,80+i,382);
     circle(30+i,400,5);
     circle(80+i,400,5);
     rectangle(40,260,115,280);
     floodfill(31+i,399,15);
     floodfill(81+i,399,15);
     floodfill(46+i,380,15);
     floodfill(66+i,380,15);
     floodfill(45,270,15);
     line(0,258,300,250);
     line(300,250,639,280);
	// heal
	setfillstyle(1,4);
  line(0,250,157,140);
   line(200,150,350,255);
   line(271,200,382,140);
  arc(174,164,28,130,29);
   arc(271,190,10,160,30);
  line(410,140,570,274);
   arc(396,155,34,130,20);
   floodfill(272,198,15);
	setfillstyle(1,14);
	settextstyle(2,0,6);
      bar(50,280,55,350);
      bar(100,280,105,350);
      setcolor(BLUE);
      outtextxy(37,260,"QUIZ GAME");
      setcolor(15);
      settextstyle(1,0,4);
      setcolor(random(15));
      outtextxy(140,440,"Let's Enjoy your LIFE");
      setcolor(15);
      rectangle(0,0,639,479);
      setfillstyle(1,4);
      setbkcolor(GREEN);
      outtextxy(170,5,"__Congratulation__");
      settextstyle(7,0,0);
      setcolor(random(15)+1);
      outtextxy(200,40,name);
      setcolor(15);
      settextstyle(1,0,4);
      outtextxy(130,75,"YOU ACHIVED YOUR GOAL");
      delay(200);
      if(kbhit())
      {goto exit;}
      }
       goto start;
      exit:
  getch();
  closegraph();
  }