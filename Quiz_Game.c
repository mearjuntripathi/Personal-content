/*--------------------------------------------------------------------------*/

//This is a Program on a Quiz Game

//It based on current affair

//It developed on 13 Dec 2020 at 01:30 PM by "Arjun Tripathi"

/*
  it got updated and renewed in their code on
  01 Oct 2021 at 07:30 PM by "Arjun Tripathi"
*/
/*--------------------------------------------------------------------------*/

// this is header files
// some are inbuilt
// some are degined

#include	<dos.h>

#include        "Arjun.txt"

#include        "destination.f"

#include	<conio.h>

#include	<stdio.h>

#include	<graphics.h>

#include	<string.h>

#include	<stdlib.h>

#define watermark outtextxy(100,10,"* * WELLCOME IN QUIZ GAME CREATED BY \"ARJUN TRIPATHI\" * *");


//it is function definition

void rule_box();

int quit(int);

void que_theme(int);

void opt1_theme(int,int,int);

void opt2_theme(int,int,int);

void opt3_theme(int,int,int);

void opt4_theme(int,int,int);

void lifeline1_theme(int);

void lifeline2_theme(int);

void lifeline3_theme(int);

int lifeline(int*,int*);

char* welcome_theme();

void welcome();

int cheak_answer(int,int*,int*);



//Global variable decleration

char name[30];

int poly[14]={100,100,110,80,530,80,540,100,530,120,110,120,100,100};

int poly1[14]={100,250,110,230,260,230,270,250,260,270,110,270,100,250};

int poly2[14]={370,250,380,230,530,230,540,250,530,270,380,270,370,250};

int poly3[14]={100,300,110,280,260,280,270,300,260,320,110,320,100,300};

int poly4[14]={370,300,380,280,530,280,540,300,530,320,380,320,370,300};

int life[3]={0,0,0};

int time=30,score,n;



//it is a main function

int main()

{
	 int gd=DETECT,gm;
	 int que_loop,opt_loop,l;
	 char msg1[30],msg2[30],t[4];
	 int code;
	 strcpy(name,welcome_theme());
	 l=n;
	 initgraph(&gd,&gm,"c:\\tc\\bgi");
	 cleardevice();
	 restart:
	 life[0]=life[1]=life[2]=score=0;
	 time=30;
	 welcome();
	 rule_box();
 for(que_loop=0 ; que_loop<l ; que_loop++,score++)
 {
    purpose1:
    cleardevice();
    setfillstyle(SOLID_FILL,BLUE);
    bar(-1,-1,640,480);
    setcolor(WHITE);
    watermark;
    rectangle(-1,20,640,460);
    setcolor(WHITE);
    sprintf(msg1,"Question no.-%03d",score+1);
    outtextxy(20,465,msg1);
    sprintf(msg2,"Playing by %s",name);
    outtextxy(350,465,msg2);
    line(000,100,100,100);
    que_theme(que_loop);
    setcolor(WHITE);
    line(540,100,640,100);
    opt_loop=que_loop*4;
    line(000,250,100,250);
    opt1_theme(opt_loop,0,0);
    setcolor(WHITE);
    line(270,250,370,250);
    opt2_theme(opt_loop+1,0,0);
    setcolor(WHITE);
    line(540,250,640,250);

    line(000,300,100,300);
    opt3_theme(opt_loop+2,0,0);
    setcolor(WHITE);
    line(270,300,370,300);
    opt4_theme(opt_loop+3,0,0);
    setcolor(WHITE);
    line(540,300,640,300);
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    bar(80,350,560,450);
    rectangle(80,350,560,450);
    lifeline1_theme(life[0]);
    setcolor(WHITE);
    lifeline2_theme(life[1]);
    setcolor(WHITE);
    lifeline3_theme(life[2]);
    if( time>20 )
	     setfillstyle(1,GREEN);
	  if( time>10 && time<=20 )
	     setfillstyle(1,YELLOW);
	  if( time>0 && time<=10 )
	     setfillstyle(1,RED);
	  if(time==0)
	      quit(1);
	  fillellipse(320,180,30,30);
	  settextstyle(10,0,3);
	  sprintf(t,"%02d",time);
	  setcolor(BLACK);
	  outtextxy(300,150,t);
	  settextstyle(0,0,0);
    code=check_answer(que_loop,&l,&que_loop);
    if(code==1)
     goto purpose1;
    else if(code==2)
    goto restart;
 }
 destination(name);//it is a function which built in destination.f header file
 return 0;
}


//This is a Welcome Theme and
//it perform to acces a user name
//and question limit when start a game

char* welcome_theme()
{
	char name[30];
	char mess1[80]="_______________________WELCOME IN QUIZ GAME_______________________ ";
	char mess2[80]="_______________________PLESE ENTER YOUR NAME_______________________";
	char mess3[80]="BEST OF LUCK DO YOUR BEST";
	char *arr="loading";
	int a=0,i=0,j=0;
	int x=8,y=8;
	char mess[5];
	clrscr();
	_setcursortype(_NOCURSOR);
	window(1,1,80,2);
	textcolor(14);
	cprintf("ARJUN TRIPATHI PROGRAMMING\n\r__________________________");
	textcolor(15);
	//first window close
	window(1,3,80,16);
	while(!kbhit())
	{
	for(j=0;j<7;j++)
	{
		gotoxy(37,10);
		arr[j]=arr[j]-32;
		delay(150);
		cprintf(arr);
		arr[j]=arr[j]+32;
	}
	textcolor(random(15)+1);
	}
	getch();
	clrscr();
	gotoxy(1,1);
	cprintf("Ú-");
	gotoxy(79,1);
	cprintf("-¿");
	gotoxy(8,5);
	while(a!=66)
	{
		delay(50);
		textcolor(0);
		textbackground(15);
		putch(mess1[a]);
		sound(1500);
		delay(20);
		nosound();
		a++;
	}
	textcolor(10);textbackground(0);
	a=0;
	while(a!=66)
	{
		delay(50);
		gotoxy(x,y);
		putch(47);sound(1000);delay(10);nosound();
		gotoxy(x,y);
		clreol();
		putch(124);sound(1500);delay(10);nosound();
		gotoxy(x,y);
		clreol();
		putch(92);sound(2000);delay(10);nosound();
		gotoxy(x,y);
		clreol();
		putch(mess2[a]);
		a++;x++;
	}
	printf("\n\n\t\t\t\t  ");
	gets(name);
	printf("\n\n\t   ___________HOW MANY QUESTION YOU WANT TO ATTEND__________\n\t\t\t\t\t ");
	scanf("%d",&n);
	window(1,17,80,25);
	textcolor(15);
	gotoxy(1,8);
	cprintf("À-");
	gotoxy(79,8);
	cprintf("-Ù");
	while(!kbhit())
	{
		delay(100);
		textcolor(random(15));
		gotoxy(30,4);
		clreol();
		cprintf(mess3);sound(random(100)+1000);delay(30);nosound();
		gotoxy(28,6);
		cprintf("___PRESS ENTER TO CONTINUE___");
	}
	getch();
	clrscr();
	return name;
}


//start up theme

void welcome() {
int i;
setfillstyle(SOLID_FILL,BLACK);
bar(0,0,getmaxx(),getmaxy());
setfillstyle(SOLID_FILL,MAGENTA);
fillellipse(getmaxx()/2,(getmaxy()/2),90,50);
setcolor(BLUE);
settextstyle(3,0,4);
outtextxy(getmaxx()/2-80,(getmaxy()/2-20),"Quiz Game");
getch();
for(i=0;i<180;i+=18){
delay(400);
setfillstyle(SOLID_FILL,BLUE);
bar(0,0,getmaxx(),getmaxy());
setfillstyle(SOLID_FILL,MAGENTA);
fillellipse(getmaxx()/2,(getmaxy()/2)-i,90,50);
setcolor(BLUE);
settextstyle(3,0,4);
outtextxy(getmaxx()/2-80,(getmaxy()/2-20)-i,"Quiz Game");
}
setcolor(WHITE);
settextstyle(4,0,0);
outtextxy(180,getmaxy()/2,"Welcome in Quiz Game");
setcolor(LIGHTRED);
outtextxy(getmaxx()/2-(strlen(name)*5),getmaxy()/2+50,name);
settextstyle(0,0,0);
setcolor(15);
bar(235,395,445,410);
rectangle(235,395,445,410);
outtextxy(240,400,"Press any key to Continue");
getch();
setfillstyle(SOLID_FILL,GREEN);
bar(235,395,445,410);
rectangle(235,395,445,410);
outtextxy(240,400,"Press any key to Continue");
delay(300);
setfillstyle(SOLID_FILL,BLACK);
}



/* It is a rule box
which give a information
how to play a game it perform
when click Ctrl+h */

void rule_box()
{
   int gd=DETECT,gm;
   cleardevice();
   initgraph(&gd,&gm,"c:\\tc\\bgi");
   setfillstyle(SOLID_FILL,BLUE);
   bar(0,0,getmaxx(),getmaxy());
   rectangle(150,200,480,400);
   setfillstyle(SOLID_FILL,LIGHTBLUE);
   setcolor(BLUE);
   setfillstyle(1,15);
   fillpoly(7,poly);
   bar(155,205,475,395);
   setcolor(BLACK);
   outtextxy(220,100,"Quiz Game Control Key");
   outtextxy(170,230,"   Key     |     Work");
   outtextxy(170,250," a,b,c,d   |    OPTION KEY");
   outtextxy(170,260," ctrl+h    |    HELP(CONTROL KEY)");
   outtextxy(170,270," ctrl+r    |    RESTART");
   outtextxy(170,280," Esc       |    EXIT");
   outtextxy(170,290," ctrl+l    |    LIFELINE");
   outtextxy(170,300,"     1.)   |    50-50");
   outtextxy(170,310,"     2.)   |    Question Exechange");
   outtextxy(170,320,"     3.)   |    Tell Answer");
   outtextxy(170,330,"     4.)   |    Exit to LIFELINE");
   outtextxy(200,350,"NEW UPDATE WILL CAME SOON");
   setcolor(RED);
   outtextxy(200,370,"Creator :  ARJUN TRIPATHI");
   setfillstyle(1,15);
   getch();
   cleardevice();
}



// It a function by which player
// exit from game when click Esc

int quit(int value)
{
	   int gd=DETECT,gm;
	   char mes[60],a[20];
	   initgraph(&gd,&gm,"c:\\tc\\bgi");
	   if(value==1)
	   {
	   if(time==0){
		strcpy(a,"____TIME OUT____");}
	   else strcpy(a,"INCORRECT ANSWER");
	   cleardevice();
	   setfillstyle(1,1);
	   bar(0,0,640,480);
	   settextstyle(3,0,0);
	   outtextxy(80,25,"oop's you not achived your goal");
	   setfillstyle(1,YELLOW);
	   setcolor(0);
	   fillellipse(getmaxx()/2,150,60,60);
	   settextstyle(2,0,4);
	   outtextxy(270,140,a);getch();
	   fillellipse(getmaxx()/2,150,60,60);
	   circle(290,130,10);circle(345,130,10);
	   arc(320,190,0,180,30);
	   setfillstyle(1,15);
	   line(000,300,100,300);
	   fillpoly(7,poly3);
	   line(270,300,370,300);
	   fillpoly(7,poly4);
	   line(540,300,640,300);
	   setcolor(15);
	   settextstyle(1,0,3);
	   sprintf(mes,"you score only %d question in %d question using %02d lifeline",score,n,life[0]+life[1]+life[2]);
	   outtextxy(100,230,"DO YOU WANT TO EXIT OR RESTART");
	   settextstyle(1,0,2);
	   outtextxy(15,400,mes);
	   setcolor(0);
	   settextstyle(0,0,0);
	   outtextxy(130,300,"E. Exit");
	   outtextxy(420,300,"R. Restart");
	   while(1)
	   {
	   switch(getch()){
	   case'e':case'E':
	       setfillstyle(1,YELLOW);
	       fillpoly(7,poly3);
	       outtextxy(130,300," E. Exit");
	       setfillstyle(1,GREEN);
	       fillpoly(7,poly3);
	       outtextxy(130,300," E. Exit");
	       delay(150);
	       closegraph();
	       exit(1);
	   case'r':case'R':
	       setfillstyle(1,YELLOW);
	       fillpoly(7,poly4);
	       outtextxy(420,300," R. Restart");
	       setfillstyle(1,GREEN);
	       fillpoly(7,poly4);
	       outtextxy(420,300," R. Restart");
	       delay(150);
	       return 2;
	       }
	   }
	   }
	   else if(value==0){
	   cleardevice();
	   setfillstyle(1,BLUE);
	   bar(0,0,640,480);
	   setfillstyle(1,15);
	   line(000,100,100,100);
	   fillpoly(7,poly);
	   line(540,100,640,100);

	   line(000,250,100,250);
	   fillpoly(7,poly1);
	   line(270,250,370,250);
	   fillpoly(7,poly2);
	   line(540,250,640,250);
	   setcolor(0);
	   outtextxy(230,100,"DO YOU WANT TO EXIT");
	   outtextxy(130,250," Y. YES");
	   outtextxy(400,250," N. NO");
	   while(1)
	   {
	   switch(getch()){
	   case'y':case'Y':
	       setfillstyle(1,YELLOW);
	       fillpoly(7,poly1);
	       outtextxy(130,250," Y. YES");
	       setfillstyle(1,GREEN);
	       fillpoly(7,poly1);
	       outtextxy(130,250," Y. YES");
	       delay(150);
	       closegraph();
	       exit(1);
	   case'n':case'N':
	       setfillstyle(1,YELLOW);
	       fillpoly(7,poly2);
	       outtextxy(420,250," N. NO");
	       setfillstyle(1,GREEN);
	       fillpoly(7,poly2);
	       outtextxy(420,250," N. NO");
	       delay(150);
	       return 1;
	       }  }	   }
}




// It is function to create a question's theme

void que_theme(int num)
{
	setfillstyle(SOLID_FILL,WHITE);
	setcolor(BLACK);
	fillpoly(7,poly);
	outtextxy(110,100,Question[num]);
}


// It is a function to create a theme of first option

void opt1_theme(int num,int correct,int answer)
{
	if(correct==0)
	{
	setfillstyle(SOLID_FILL,WHITE);
	setcolor(BLACK);
	fillpoly(7,poly1);
	outtextxy(110,250,Option[num]);
	}
	else
	if(correct==answer)
	{
	    setfillstyle(SOLID_FILL,YELLOW);
	    fillpoly(7,poly1);
	    setcolor(BLACK);
	    outtextxy(110,250,Option[num]);
	    delay(700);
	    setfillstyle(SOLID_FILL,GREEN);
	    fillpoly(7,poly1);
	    setcolor(BLACK);
	    outtextxy(110,250,Option[num]);
	    getch();
	}
	else
	if(answer==10)
	{
	delay(1000);
	setfillstyle(SOLID_FILL,GREEN);
	fillpoly(7,poly1);
	setcolor(BLACK);
	outtextxy(110,250,Option[num]);
	getch();
	}
	else
	if(correct!=answer)
	{
	    setfillstyle(SOLID_FILL,YELLOW);
	    fillpoly(7,poly1);
	    setcolor(BLACK);
	    outtextxy(110,250,Option[num]);
	    delay(500);
	    setfillstyle(SOLID_FILL,RED);
	    fillpoly(7,poly1);
	    setcolor(BLACK);
	    outtextxy(110,250,Option[num]);
	}

}


//It is a function to create a second option theme

void opt2_theme(int num,int correct,int answer)
{
	if(correct==0)
	{
	setfillstyle(SOLID_FILL,WHITE);
	setcolor(BLACK);
	fillpoly(7,poly2);
	outtextxy(380,250,Option[num]);
	}
	else
	if(correct==answer)
	{
	    setfillstyle(SOLID_FILL,YELLOW);
	    setcolor(BLACK);
	    fillpoly(7,poly2);
	    outtextxy(380,250,Option[num]);
	    delay(700);
	    setfillstyle(SOLID_FILL,GREEN);
	    setcolor(BLACK);
	    fillpoly(7,poly2);
	    outtextxy(380,250,Option[num]);
	    getch();
	}
	else
	if(answer==10)
	{
	delay(1000);
	setfillstyle(SOLID_FILL,GREEN);
	setcolor(BLACK);
	fillpoly(7,poly2);
	outtextxy(380,250,Option[num]);
	getch();
	}
	else
	if(correct!=answer)
	{
	    setfillstyle(SOLID_FILL,YELLOW);
	    setcolor(BLACK);
	    fillpoly(7,poly2);
	    outtextxy(380,250,Option[num]);
	    delay(500);
	    setfillstyle(SOLID_FILL,RED);
	    setcolor(BLACK);
	    fillpoly(7,poly2);
	    outtextxy(380,250,Option[num]);
	}

}


//It is function to create a third option theme

void opt3_theme(int num,int correct,int answer)
{

	if(correct==0)
	{
	setfillstyle(SOLID_FILL,WHITE);
	setcolor(BLACK);
	fillpoly(7,poly3);
	outtextxy(110,300,Option[num]);
	}
	else
	if(correct==answer)
	{
	    setfillstyle(SOLID_FILL,YELLOW);
	    setcolor(BLACK);
	    fillpoly(7,poly3);
	    outtextxy(110,300,Option[num]);
	    delay(700);
	    setfillstyle(SOLID_FILL,GREEN);
	    setcolor(BLACK);
	    fillpoly(7,poly3);
	    outtextxy(110,300,Option[num]);
	    getch();
	}
	else
	if(answer==10)
	{
	delay(1000);
	setfillstyle(SOLID_FILL,GREEN);
	setcolor(BLACK);
	fillpoly(7,poly3);
	outtextxy(110,300,Option[num]);
	getch();
	}
	else
	if(correct!=answer)
	{
	    setfillstyle(SOLID_FILL,YELLOW);
	    setcolor(BLACK);
	    fillpoly(7,poly3);
	    outtextxy(110,300,Option[num]);
	    delay(500);
	    setfillstyle(SOLID_FILL,RED);
	    setcolor(BLACK);
	    fillpoly(7,poly3);
	    outtextxy(110,300,Option[num]);
	}

}


// It is function to create a fourth option theme

void opt4_theme(int num,int correct,int answer)
{

	if(correct==0)
	{
	setfillstyle(SOLID_FILL,WHITE);
	setcolor(BLACK);
	fillpoly(7,poly4);
	outtextxy(380,300,Option[num]);
	}
	else
	if(correct==answer)
	{
	    setfillstyle(SOLID_FILL,YELLOW);
	    setcolor(BLACK);
	    fillpoly(7,poly4);
	    outtextxy(380,300,Option[num]);
	    delay(700);
	    setfillstyle(SOLID_FILL,GREEN);
	    setcolor(BLACK);
	    fillpoly(7,poly4);
	    outtextxy(380,300,Option[num]);
	    getch();
	}
	else
	if(answer==10)
	{
	delay(1000);
	setfillstyle(SOLID_FILL,GREEN);
	setcolor(BLACK);
	fillpoly(7,poly4);
	outtextxy(380,300,Option[num]);
	getch();
	}
	else
	if(correct!=answer)
	{
	    setfillstyle(SOLID_FILL,YELLOW);
	    setcolor(BLACK);
	    fillpoly(7,poly4);
	    outtextxy(380,300,Option[num]);
	    delay(500);
	    setfillstyle(SOLID_FILL,RED);
	    setcolor(BLACK);
	    fillpoly(7,poly4);
	    outtextxy(380,300,Option[num]);
	}

}


//This function for first Life Line theme

void lifeline1_theme(int n)
{
 if(n==0)
 setfillstyle(SOLID_FILL,GREEN);
 if(n==1)
 setfillstyle(SOLID_FILL,RED);
 if(n==2)
 setfillstyle(SOLID_FILL,YELLOW);
 fillellipse(150,400,50,50);
 setcolor(BLACK);
 outtextxy(130,400,"50-50");
}


//This is second lifeline theme

void lifeline2_theme(int n)
{

 if(n==0)
 setfillstyle(SOLID_FILL,GREEN);
 if(n==1)
 setfillstyle(SOLID_FILL,RED);
 if(n==2)
 setfillstyle(SOLID_FILL,YELLOW);
 fillellipse(320,400,50,50);
 setcolor(BLACK);
 outtextxy(290,390,"Question");
 outtextxy(285,400,"Exechange");
}


//third lifeline design

void lifeline3_theme(int n)
{

 if(n==0)
 setfillstyle(SOLID_FILL,GREEN);
 if(n==1)
 setfillstyle(SOLID_FILL,RED);
 if(n==2)
 setfillstyle(SOLID_FILL,YELLOW);
 fillellipse(490,400,50,50);
 setcolor(BLACK);
 outtextxy(450,400,"Tell Answer");
}

//this function run timer
int clock(){
while(!kbhit()){
	  char t[4];
	  int con;
	  sleep(1);
	  time--;
	  fillellipse(320,180,30,30);
	  settextstyle(10,0,3);
	  sprintf(t,"%02d",time);
	  outtextxy(300,150,t);
	  setcolor(BLACK);
	  settextstyle(0,0,0);
	  if( time>20 )
	     setfillstyle(1,GREEN);
	  if( time>10 && time<=20 )
	     setfillstyle(1,YELLOW);
	  if( time>0 && time<=10 )
	     setfillstyle(1,RED);
	  if(time==0)
	  {   con=quit(1); return 2;}

}
return getch();
}


//This function is to cheak user's answer is valid or not

int check_answer(int n,int *l,int*que_loop)
{
	char opt[1];
	int code;
	while(1)
	{


	  switch(clock())
	  {
	    case'a': case'A': opt[0]='a';opt[1]='\0';
			      if((strcmp(opt,Answer[n]))==0)
			      {
				opt1_theme(4*n,1,1);
			      }
			      else
			      {
				opt1_theme(4*n,1,0);
				if((strcmp(Answer[n],"b"))==0)
				    opt2_theme(4*n+1,2,10);
				if((strcmp(Answer[n],"c"))==0)
				    opt3_theme(4*n+2,3,10);
				if((strcmp(Answer[n],"d"))==0)
				    opt4_theme(4*n+3,4,10);
				    quit(1);
			      }time=30;
			      return;

	    break;
	    case'b': case'B': opt[0]='b';opt[1]='\0';
			      if((strcmp(opt,Answer[n]))==0)
			      {
				 opt2_theme(4*n+1,2,2);
			      }
			      else
			      {
				 opt2_theme(4*n+1,2,0);
				 if((strcmp(Answer[n],"a"))==0)
				    opt1_theme(4*n,1,10);
				if((strcmp(Answer[n],"c"))==0)
				    opt3_theme(4*n+2,3,10);
				if((strcmp(Answer[n],"d"))==0)
				    opt4_theme(4*n+3,4,10);
				    quit(1);
			      }time=30;
			      return;
	    break;
	    case'c': case'C': opt[0]='c';opt[1]='\0';
			      if((strcmp(opt,Answer[n]))==0)
			      {
				opt3_theme(4*n+2,3,3);
			      }
			      else
			      {
				opt3_theme(4*n+2,3,0);
				if((strcmp(Answer[n],"a"))==0)
				    opt1_theme(4*n,1,10);
				if((strcmp(Answer[n],"b"))==0)
				    opt2_theme(4*n+1,2,10);
				if((strcmp(Answer[n],"d"))==0)
				    opt4_theme(4*n+3,4,10);
				    quit(1);
			      }time=30;
			      return;
	    break;
	    case'd': case'D': opt[0]='d';opt[1]='\0';
			      if((strcmp(opt,Answer[n]))==0)
			      {
				 opt4_theme(4*n+3,4,4);
			      }
			      else
			      {
				 opt4_theme(4*n+3,4,0);
				 if((strcmp(Answer[n],"a"))==0)
				    opt1_theme(4*n,1,10);
				if((strcmp(Answer[n],"b"))==0)
				    opt2_theme(4*n+1,2,10);
				if((strcmp(Answer[n],"c"))==0)
				    opt3_theme(4*n+2,3,10);
				    quit(1);
			      }time=30;
			      return;
	    break;
	    case 12:
		    code=lifeline(l,que_loop);
		    return code;
	    break;
	    case 27:return quit(0);
	    break;
	    case 18:case 2:	cleardevice();
				setfillstyle(1,BLUE);
				bar(0,0,640,480);
				setfillstyle(1,15);
				line(000,100,100,100);
				fillpoly(7,poly);
				line(540,100,640,100);

				line(000,250,100,250);
				fillpoly(7,poly1);
				line(270,250,370,250);
				fillpoly(7,poly2);
				line(540,250,640,250);
				setcolor(0);
				outtextxy(230,100,"DO YOU WANT TO RESTART");
				outtextxy(130,250," Y. YES");
				outtextxy(400,250," N. NO");
				while(1)
				{
				switch(getch()){
				case'y':case'Y':
					setfillstyle(1,YELLOW);
					fillpoly(7,poly1);
					outtextxy(130,250," Y. YES");
					setfillstyle(1,GREEN);
					fillpoly(7,poly1);
					outtextxy(130,250," Y. YES");
					delay(150);
					return 2;
				case'n':case'N':
					setfillstyle(1,YELLOW);
					fillpoly(7,poly2);
					outtextxy(420,250," N. NO");
					setfillstyle(1,GREEN);
					fillpoly(7,poly2);
					outtextxy(420,250," N. NO");
					delay(150);
					return 1;
				}  }
	    break;
	    case 8:rule_box();
		   return 1;
	    break;
	  }}
	return 0;

}



//This function provide us a facility to use a Lifeline


int lifeline(int*l,int*que_loop)
{
	setfillstyle(CLOSE_DOT_FILL,LIGHTBLUE);
	bar(80,350,560,450);
	lifeline1_theme(life[0]);
	lifeline2_theme(life[1]);
	lifeline3_theme(life[2]);
	restart:
	switch(clock())
	{
	    case'1':if(life[0]==0)
		    {  lifeline1_theme(2);
		       if((strcmp(Answer[*que_loop],"a"))==0)
		       {
			   setfillstyle(SOLID_FILL,WHITE);
			   fillpoly(7,poly2);
			   fillpoly(7,poly4);
			   again1:
			   switch(clock())
			   {
			     case 'a':
			     case 'A':opt1_theme(4*(*que_loop),1,1);time=30;
			     break;
			     case 'c':
			     case 'C':opt3_theme(4*(*que_loop)+2,1,0);
				     opt1_theme(4*(*que_loop),1,10);
				     quit(1);
			     break;
			     default:goto again1;
			     break;
			   }
		       }
		       if((strcmp(Answer[*que_loop],"c"))==0)
		       {
			 setfillstyle(SOLID_FILL,WHITE);
			 fillpoly(7,poly2);
			 fillpoly(7,poly4);
			 again2:
			 switch(clock())
			 {
			     case 'a':
			     case 'A':opt1_theme(4*(*que_loop),1,0);
				      opt3_theme(4*(*que_loop)+2,1,10);
				      quit(1);
			     break;
			     case 'c':
			     case 'C':opt3_theme(4*(*que_loop)+2,3,3);time=30;
			     break;
			     default:goto again2;
			     break;
			 }
		       }
		       if((strcmp(Answer[*que_loop],"b"))==0)
		       {
			 setfillstyle(SOLID_FILL,WHITE);
			 fillpoly(7,poly1);
			 fillpoly(7,poly3);
			 again3:
			 switch(clock())
			 {
			     case 'b':
			     case 'B':opt2_theme(4*(*que_loop)+1,2,2);time=30;
			     break;
			     case 'd':
			     case 'D':opt4_theme(4*(*que_loop)+3,4,0);
				     opt2_theme(4*(*que_loop)+1,2,10);
				     quit(1);
			     default:goto again3;
			     break;
			 }
			}
		       if((strcmp(Answer[*que_loop],"d"))==0)
		       {
			   setfillstyle(SOLID_FILL,WHITE);
			   fillpoly(7,poly1);
			   fillpoly(7,poly3);
			   again4:
			   switch(clock())
			   {
			      case 'b':
			      case 'B':opt2_theme(4*(*que_loop)+1,2,0);
				      opt4_theme(4*(*que_loop)+3,4,10);
					quit(1);
			      break;
			      case 'd':
			      case 'D':opt4_theme(4*(*que_loop)+3,4,4);time=30;
			      break;
			      default:goto again4;
			      break;
			   }
		       }
		       life[0]=life[0]+1;
		       *que_loop=*que_loop+1;
		       return 1;
		       }
		       else goto restart;
	    case'2':if(life[1]==0)
		    {
		      lifeline2_theme(2);
		    if((strcmp(Answer[*que_loop],"a"))==0)
		      opt1_theme(4*(*que_loop),1,1);
		    if((strcmp(Answer[*que_loop],"b"))==0)
		      opt2_theme(4*(*que_loop)+1,2,2);
		    if((strcmp(Answer[*que_loop],"c"))==0)
		      opt3_theme(4*(*que_loop)+2,3,3);
		    if((strcmp(Answer[*que_loop],"d"))==0)
		      opt4_theme(4*(*que_loop)+3,4,4);
		    *l=*l+1;
		    *que_loop=*que_loop+1;l++;score--;
		    life[1]=life[1]+1; time=30;
		    return 1;
		    }
		    else goto restart;
	    case'3':if(life[2]==0)
		    {
		      lifeline3_theme(2);

		    if((strcmp(Answer[*que_loop],"a"))==0)
		      {
		       setfillstyle(SOLID_FILL,WHITE);
		       fillpoly(7,poly2);fillpoly(7,poly3);
		       fillpoly(7,poly4);getch();
		       opt1_theme(4*(*que_loop),1,10);
		       *que_loop=*que_loop+1;life[2]=life[2]+1; time=30;
		       return 1;
		       }
		    if((strcmp(Answer[*que_loop],"b"))==0)
		      {
		       setfillstyle(SOLID_FILL,WHITE);
		       fillpoly(7,poly1);fillpoly(7,poly3);
		       fillpoly(7,poly4);getch();
		       opt2_theme(4*(*que_loop)+1,2,10);
		       *que_loop=*que_loop+1;life[2]=life[2]+1; time=30;
		       return 1;
		       }
		    if((strcmp(Answer[*que_loop],"c"))==0)
		      {
		       setfillstyle(SOLID_FILL,WHITE);
		       fillpoly(7,poly1);fillpoly(7,poly2);
		       fillpoly(7,poly4);getch();
		       opt3_theme(4*(*que_loop)+2,3,10);
		       *que_loop=*que_loop+1;life[2]=life[2]+1;  time=30;
		       return 1;
		       }
		    if((strcmp(Answer[*que_loop],"d"))==0)
		      {
		       setfillstyle(SOLID_FILL,WHITE);
		       fillpoly(7,poly1);fillpoly(7,poly2);
		       fillpoly(7,poly3);getch();
		       opt4_theme(4*(*que_loop)+3,4,10);
		       *que_loop=*que_loop+1;life[2]=life[2]+1;  time=30;
		       return 1;
		       }

		    }
		    else goto restart;
	    case'4':return 1;
	    break;
	    default:goto restart;
	    break;
	}
	}


				/* END OF PROGRAM */

				 /* DEVELOPED BY */
				/* ARJUN TRIPATHI */

				  /*DIRECTION BY*/
				  /* KARDAM SIR */

				   /* PARTENER */
				 /* ANAND KUMAR */

				  /* THANK YOU */

