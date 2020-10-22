#include<stdio.h>
#include<dos.h>
#include<string.h>
#include<graphics.h>
#include<stdlib.h>
#include<conio.h>


#define RIGHT   \
     {      \
	 setfillstyle(1,BLACK);\
	 bar(72,10,450,230);\
	 setcolor(GREEN);\
	 settextstyle(3,0,7);\
	 outtextxy(100,20," BULL'S");\
	 outtextxy(180,70,"     EYE");\
	 stgt(220,170);\
	 delay(400);\
	 hole(220,170);\
	 b_sound();\
	 setfillstyle(1,BLACK);\
	 bar(219,459,350,475);\
	 setcolor(WHITE);\
	 settextstyle(2,0,4);\
	 outtextxy(220,460,"Press key to Proceed");\
     }

#define WRONG   \
     {      \
	 setfillstyle(1,BLACK);\
	 bar(72,10,450,230);\
	 setcolor(RED);\
	 settextstyle(3,0,7);\
	 outtextxy(100,20,"MISSED");\
	 outtextxy(180,80," THE AIM");\
	 stgt(170,160);\
	  delay(400);\
	 hole(335,210);\
	 b_sound();\
	  setcolor(GREEN);\
	 settextstyle(2,0,6);\
	 outtextxy(10,100,"Right Ans");\
	 outtextxy(40,115,aj);\
	 settextstyle(2,0,4);\
	 setfillstyle(1,BLACK);\
	 bar(219,459,330,475);\
	 setcolor(RED);\
	 outtextxy(245,460,"GAME OVER");\
	 getch();\
	 screen2("Thanks For Playing",mih);\
	 closegraph();\
	 exit(0);\
     }


void tgt(int,int);     //Big target
void hole(int ,int);       //Gun Shot
void b_sound();            //Shot Sound
void tbb();                //The B S screen
void stgt(int,int);        //Small target
void main_s(int level,char ques1[],char ques2[],char opa[],char opb[],char opc[],char opd[],char answer);    //main screen
char sclock(int x, int y,int t);  //clock
void rules();   //rules screen
void screen();  //10 cr screen
void screen2(char sent[],char money[]); //Fail screen
void scr1();

long int m_i_h,m_w;
int level=1,tim=30,help=0,h1=0,h2=0,h3=0,flag1,flag2;
char ques1[500],ques2[500],opa[100],opb[100],opc[100],opd[100],ans_s[2],answer,ansc,h,dd_ans;
long int mon[17]={0,10000,20000,50000,80000,160000,250000,500000,1250000,2500000,5000000,8500000,10000000,30000000,50000000,70000000,100000000};
char aj[2],ajj1[2],ajj2[2],mih[10],mw[10];
void main()
{
   int gd=DETECT,gm;
   int c,i,j,l,q,val,choice1,k;
   int ans,help,f_ans;
   initgraph(&gd,&gm,"C:\\TC\\BGI");
   setbkcolor(BLACK);
   for(i=0;i<250;i=i+5)
   {
       cleardevice();
       tgt(600-i,420-i);
       delay(20);
   }
   for(i=0;i<250;i=i+5)
   {
       cleardevice();
       tgt(350-i,170+i*.1);
       delay(20);
   }
   for(i=0;i<231;i=i+5)
   {
       cleardevice();
       tgt(100+i,195+i*.25);
       delay(20+i*.15);
   }
   delay(100);
   hole(270,250);
   b_sound();
   delay(150);
   hole(300,310);
   b_sound();
   delay(300);
   hole(330,253);
   b_sound();
   delay(30);
   tbb();

   CHOICE1:
   choice1=getch();
   if(choice1=='2')
      rules();
   else if(choice1=='3')
   {
      closegraph();
      exit(0);
   }
   else if(choice1=='1')
   {

   }
   else
     goto CHOICE1;


   //Main Program
   for(k=0;k<16;k++)
   {

   switch(level-1)
   {

      case 0:
	 srand(time(0));
	 q=rand()%10;
	 level=1;
	 switch(q)
	  {
	  case 0:{
		 strcpy(ques1,"What is full form of ROM ?");
		 ques2[0]='\0';
		 strcpy(opa,"A.Read other memcache ");
		 strcpy(opb,"B.Read only memory");
		 strcpy(opc,"C.Read other memory ");
		 strcpy(opd,"D.Read only mamcache ");
		 ans='B';

		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;

		 }
		 break;
		 }
	   case 1: strcpy(ques1,"what is the full form of IP? ");
		  ques2[0]='\0';
		 strcpy(opa,"A.Intranet Process ");
		 strcpy(opb,"B.Internet process ");
		 strcpy(opc,"C.Intranet Protocol ");
		 strcpy(opd,"D.Internet Protocol ");
		 ans='D';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;

		 }
		  break;
	   case 2: strcpy(ques1,"Constitution of India came into effect from?");
		    ques2[0]='\0';
		 strcpy(opa,"A.15 january,1950 ");
		 strcpy(opb,"B.26 january,1950");
		 strcpy(opc,"C.15 August,1950  ");
		 strcpy(opd,"D.15 january,1950 ");
		 ans='B';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 3: strcpy(ques1,"Dr. A.P.J.Abdul Kalam was:");
		  ques2[0]='\0';
		 strcpy(opa,"A.11th President of Inadia");
		 strcpy(opb,"B.Scientist ");
		 strcpy(opc,"C.Missile man of India ");
		 strcpy(opd,"D.All of the above ");
		 ans='D';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }

		  break;
	   case 4: strcpy(ques1," Which batsman started his international \n");
		    strcpy(ques2,"cricketing career at the age of 16?");
		 strcpy(opa,"A.Suresh Raina");
		 strcpy(opb,"B.Piyush Chawla ");
		 strcpy(opc,"C.Rahul Dravid ");
		 strcpy(opd,"D.Sachin Tendulkar ");
		 ans='D';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 5:  strcpy(ques1,"Complete this quote by Bal Gangadhar\n");
		 strcpy(ques2,"Tilak,'Swaraj is my....and i will have it?'");
		 strcpy(opa,"A.Fundamental right ");
		 strcpy(opb,"B.Motherland ");
		 strcpy(opc,"C.Country ");
		 strcpy(opd,"D.Birthright ");
		 ans='D';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 6: strcpy(ques1," Minium age of a voter in India is:");
		   ques2[0]='\0';
		 strcpy(opa,"A.15 years ");
		 strcpy(opb,"B.18 years ");
		 strcpy(opc,"C.21 years ");
		 strcpy(opd,"D.35 years ");
		 ans='B';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		   break;
	   case 7: strcpy(ques1,"What is the middle name of the world class");
		  strcpy(ques2,"batsman Sachin Tendulkar?");
		 strcpy(opa,"A.Rohan  ");
		 strcpy(opb,"B.Ramesh ");
		 strcpy(opc,"C.Rahul ");
		 strcpy(opd,"D.Ravi ");
		 ans='B';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }

		  break;
	   case 8: strcpy(ques1,"Who was the first prime minister of India? ");
		  ques2[0]='\0';
		 strcpy(opa,"A.Pandit Jawaharlal Nehru ");
		 strcpy(opb,"B.Lal Bahadur Shastri ");
		 strcpy(opc,"C.Gulzar Lal Nanda ");
		 strcpy(opd,"D.None of the above ");
		 ans='A';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }

		  break;
	   case 9:strcpy(ques1,"In which of these geometrical shapes is\n");
		  strcpy(ques2,"the sum of all the angles equal to 180 degree?");
		 strcpy(opa,"A.Triangle ");
		 strcpy(opb,"B.Square ");
		 strcpy(opc,"C.Rectangle ");
		 strcpy(opd,"D.circle ");
		 ans='A';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	  }

  case 1:srand(time(0));
	 q=rand()%10;
	 level=2;
	 switch(q)
	  {
	  case 0:strcpy(ques1,"Which is the least popolous state in india?");
		 ques2[0]='\0';
		 strcpy(opa,"A:Uttarakhand");
		 strcpy(opb,"B:Punjab");
		 strcpy(opc,"C:Sikkim");
		 strcpy(opd,"D:UP");
		 ans='C';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		 break;
	   case 1:strcpy(ques1,"What is full form of ISO?");
		  ques2[0]='\0';
		 strcpy(opa,"A:international system org");
		 strcpy(opb,"B:intranational standard org");
		 strcpy(opc,"C:indian standard org");
		 strcpy(opd,"D:international standard org");
		 ans='D';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 2:strcpy(ques1,"Mr. Abdul Kalam was elected as president");
		 strcpy(ques2,"in which year?");
		 strcpy(opa,"A:1986");
		 strcpy(opb,"B:1992");
		 strcpy(opc,"C:1996");
		 strcpy(opd,"D:2002 ");
		 ans='D';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 3:strcpy(ques1,"A kabaddi team usually has? ");
		 ques2[0]='\0';
		 strcpy(opa,"A: 10 players ");
		 strcpy(opb,"B: 11 players ");
		 strcpy(opc,"C: 7 players  ");
		 strcpy(opd,"D: 6 players ");
		 ans='C';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 4: strcpy(ques1,"Who was the first indian women");
		  strcpy(ques2,"to win a medal in the olympics?");
		 strcpy(opa,"A:P. T. Usha");
		 strcpy(opb,"B:Karnam Malleshwari ");
		 strcpy(opc,"C:Kunjarani Devi ");
		 strcpy(opd,"D:Bachendri Pal ");
		 ans='B';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 5:strcpy(ques1,"The first indian to receive" );
		 strcpy(ques2,"Nobel prize in literature was?");
		 strcpy(opa,"A:Mother teresa");
		 strcpy(opb,"B:C. V. Raman  ");
		 strcpy(opc,"C:Ravindranath Tagore");
		 strcpy(opd,"D:Sarojini Naidu");
		 ans='C';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 6:strcpy(ques1,"Which type of lens is used to correct myopia?");
		  ques2[0]='\0';
		 strcpy(opa,"A:Convex lens");
		 strcpy(opb,"B:Concave lens");
		 strcpy(opc,"C:Biconcave lens ");
		 strcpy(opd,"D:Biconvex lens ");
		 ans='B';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		   break;
	   case 7:strcpy(ques1,"The national song of india was composed by");
		 ques2[0]='\0';
		 strcpy(opa,"A:Rabindranath Tagore");
		 strcpy(opb,"B:Bankim Chandra Chatterji");
		 strcpy(opc,"C:Iqbal");
		 strcpy(opd,"D:Jai Shankar Prasad");
		 ans='B';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 8:strcpy(ques1,"How many wickets kapil dev had taken\n ");
		  strcpy(ques2,"in test matches when he retired?");
		 strcpy(opa,"A: 450 ");
		 strcpy(opb,"B: 430");
		 strcpy(opc,"C: 435 ");
		 strcpy(opd,"D: 434");
		 ans='D';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 9:strcpy(ques1,"Which of the following is the lightest metal?");
		  ques2[0]='\0';
		 strcpy(opa,"A:Mercury ");
		 strcpy(opb,"B:Silver ");
		 strcpy(opc,"C:Lithium ");
		 strcpy(opd,"D:Lead");
		 ans='C';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	  }
    case 2:srand(time(0));
	 q=rand()%10;
	 level=3;
	 switch(q)
	  {
	  case 0:strcpy(ques1,"Who of the following is associated");
		 strcpy(ques2,"with football ?");

		 strcpy(opa,"A.Diego Maradona ");
		 strcpy(opb,"B.Forest Hills ");
		 strcpy(opc,"C.Target ");
		 strcpy(opd,"D.Jeev Milkha Singh ");
		 ans='A';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		 break;
	   case 1:strcpy(ques1,"The average weight of the human");
		 strcpy(ques2,"brain is-----------?");

		 strcpy(opa,"A.1,500 grams ");
		 strcpy(opb,"B.1,200 grams ");
		 strcpy(opc,"C.1,400 grams ");
		 strcpy(opd,"D.1,300 grams ");
		 ans='C';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 2:strcpy(ques1,"What is the full form of USB?");
		 ques2[0]='\0';

		 strcpy(opa,"A.Unicoded Smart Bus ");
		 strcpy(opb,"B.Universal Smart Bus");
		 strcpy(opc,"C.Unicoded Serial Bus ");
		 strcpy(opd,"D.Universal Serial Bus");
		 ans='D';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 3:strcpy(ques1,"The first recipient of Rajiv Gandhi's");
		 strcpy(ques2," 'Khel Ratna' award is?");

		 strcpy(opa,"A.Vishwanathan Anand ");
		 strcpy(opb,"B.Leander peas");
		 strcpy(opc,"C.Kapil dev ");
		 strcpy(opd,"D.Zaheer Khan ");
		 ans='A';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 4:strcpy(ques1,"Who composed the famous song");
		 strcpy(ques2," 'Sare Jahan Se Achha' ");

		 strcpy(opa,"A.Jaidev ");
		 strcpy(opb,"B.Mohammad Iqbal ");
		 strcpy(opc,"C.Bankim Chandra");
		 strcpy(opd,"D.Rabindranath Tagore ");
		 ans='B';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 5:strcpy(ques1,"In which of the following festivels");
		 strcpy(ques2,"are boat races a special feature?");

		 strcpy(opa,"A.Onam ");
		 strcpy(opb,"B.Rongali BIhu ");
		 strcpy(opc,"C.Navratri ");
		 strcpy(opd,"D.Pongal ");
		 ans='A';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 6:strcpy(ques1,"There was one show called 'BigBoss(3)'");
		 strcpy(ques2,"In this show, who was the winner?");

		 strcpy(opa,"A.Ashutosh ");
		 strcpy(opb,"B.Sambhawana ");
		 strcpy(opc,"C.Bindu ");
		 strcpy(opd,"D.Monica ");
		 ans='C';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		   break;
	   case 7:strcpy(ques1,"The sanskrit word 'Himalaya' means");
		 strcpy(ques2,"the place of---------------?");

		 strcpy(opa,"A.Devata ");
		 strcpy(opb,"B.Barf ");
		 strcpy(opc,"C.Hindu ");
		 strcpy(opd,"D.Tapasaya");
		 ans='B';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 8:strcpy(ques1,"In Mahabharata,Which of these");
		 strcpy(ques2,"characters got married in a Swayamvar");

		 strcpy(opa,"A.Kunti");
		 strcpy(opb,"B.Gandhari");
		 strcpy(opc,"C.Madri");
		 strcpy(opd,"D.Satyawati");
		 ans='A';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 9:strcpy(ques1,"Which of these cannot be same for");
		 strcpy(ques2,"two different persons?");

		 strcpy(opa,"A.fingerprints");
		 strcpy(opb,"B.Skin color");
		 strcpy(opc,"C.Blood Group");
		 strcpy(opd,"D.Eye Color");
		 ans='A';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	  }
   case 3:srand(time(0));
	 q=rand()%10;
	 level=4;
	 switch(q)
	  {
	  case 0:strcpy(ques1,"The ratio of width of our National flag");
		 strcpy(ques2,"to its length is..");
		 strcpy(opa,"A.3:5 ");
		 strcpy(opb,"B.2:3 ");
		 strcpy(opc,"C.2:4 ");
		 strcpy(opd,"D.3:4 ");
		 ans='B';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		 break;
	   case 1:strcpy(ques1,"Who has been awarded the first lifetime Achievement");
		  strcpy(ques2,"Award for his/her contribution in field of Cinema");


		 strcpy(opa,"A.Ashok Kumar");
		 strcpy(opb,"B.Hou Hsio-hsein ");
		 strcpy(opc,"C.Benardo Burtolucci ");
		 strcpy(opd,"D.Akiro Burosova ");
		 ans='A';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 2:strcpy(ques1,"Who was the first recipient of Bharat Ratna");
		  ques2[0]='\0';
		 strcpy(opa,"A.Dr.Sarvapalli Radhakrishnan");
		 strcpy(opb,"B.Shri V V Giri");
		 strcpy(opc,"C.Dr.Zakir Hussain ");
		 strcpy(opd,"D.Shri JRD Tata");
		 ans='A';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 3: strcpy(ques1,"The National Anthem was first sung in the year");
		  ques2[0]='\0';
		 strcpy(opa,"A.1911");
		 strcpy(opb,"B.1913");
		 strcpy(opc,"C.1936 ");
		 strcpy(opd,"D.1935");
		 ans='A';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 4:strcpy(ques1,"What is full form of PDF");
		  ques2[0]='\0';
		 strcpy(opa,"A.Printed document format");
		 strcpy(opb,"B.Public document format");
		 strcpy(opc,"C.Portable document format ");
		 strcpy(opd,"D.Published document format");
		 ans='C';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 5:strcpy(ques1,"Saraswati samman is given annually for ");
		  strcpy(ques2,"outstanding contribution to");
		 strcpy(opa,"A.Classical music");
		 strcpy(opb,"B.Education");
		 strcpy(opc,"C.Literature ");
		 strcpy(opd,"D.Fine arts");
		 ans='C';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 6:strcpy(ques1,"Which Talent show has Sajid as the");
		  strcpy(ques2,"judge in 2010");
		 strcpy(opa,"A.Entertainment ke liye kuchh bhi karega");
		 strcpy(opb,"B.India's Got Talent");
		 strcpy(opc,"C.The Talent ");
		 strcpy(opd,"D.Chak dhoom dhoom");
		 ans='B';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		   break;
	   case 7:strcpy(ques1,"Who was the first woman in space");
		 ques2[0]='\0';
		 strcpy(opa,"A.Sally Ride");
		 strcpy(opb,"B.Christa McCauliffe");
		 strcpy(opc,"C. Lori Garver");
		 strcpy(opd,"D.Valentina Tereshkova");
		 ans='D';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 8:strcpy(ques1,"Where did India play its 1st one day");
		  strcpy(ques2,"international cricket match");
		 strcpy(opa,"A.Lords");
		 strcpy(opb,"B.Headingley");
		 strcpy(opc,"C. Taunton");
		 strcpy(opd,"D.The oval");
		 ans='B';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 9:strcpy(ques1,"What is the full form of wi-fi");
		 strcpy(opa,"A.Wireless fidelity");
		 strcpy(opb,"B.Wired fidelity");
		 strcpy(opc,"C. Wireless focus");
		 strcpy(opd,"D.Wired focus");
		 ans='A';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	  }
   case 4:srand(time(0));
	 q=rand()%10;
	 level=5;
	 switch(q)
	  {
	  case 0:strcpy(ques1," What is the full form of HTML");
		 ques2[0]='\0';
		 strcpy(opa,"A. Hyper text magic line");
		 strcpy(opb,"B.Hyper text markup line ");
		 strcpy(opc,"C.Hyper text markup language");
		 strcpy(opd,"D.High text markup language");
		 ans='C';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		 break;
	   case 1:strcpy(ques1," Name of the largest peninsular river in india");
		 ques2[0]='\0';
		 strcpy(opa," A.Godavari");
		 strcpy(opb," B.Ganga");
		 strcpy(opc," C.Narmada");
		 strcpy(opd," D.Saraswati");
		 ans='A';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 2:strcpy(ques1," The first recipient of Nehru Award was");
		 ques2[0]='\0';
		 strcpy(opa," A.Martin luther king");
		 strcpy(opb," B.Khan abdul ghaffar khan ");
		 strcpy(opc," C.Mother teresa");
		 strcpy(opd," D.U Thant");
		 ans='D';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;

	   case 3:strcpy(ques1," The first recipient of Nehru Award was");
		 ques2[0]='\0';
		 strcpy(opa," A.Martin luther king");
		 strcpy(opb," B.Khan abdul ghaffar khan ");
		 strcpy(opc," C.Mother teresa");
		 strcpy(opd," D.U Thant");
		 ans='D';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 4:strcpy(ques1," Deficiency of Vitamin D gives rise to ");
		 ques2[0]='\0';
		 strcpy(opa," A.Rheumatism");
		 strcpy(opb," B.Arthritis");
		 strcpy(opc," C.Hernia");
		 strcpy(opd," D.Rickets");
		 ans='D';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 5:strcpy(ques1,"Mohiniattam dance developed originally ");
		  strcpy(ques2,"in which state ");
		 strcpy(opa," A.Tamil nadu");
		 strcpy(opb," B.Orissa");
		 strcpy(opc," C.Kerala");
		 strcpy(opd," D.Karnataka");
		 ans='C';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 6:strcpy(ques1," Who was the first ODI captain of India");
		 ques2[0]='\0';
		 strcpy(opa," A.Ajit Wadekar ");
		 strcpy(opb," B.Bishen singh Bedi");
		 strcpy(opc," C.Nawab Pataudi");
		 strcpy(opd," D.Vinoo mankad");
		 ans='A';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 ////MAX;
		 }
		   break;
	   case 7:strcpy(ques1," The largest petroleum reserves are found in");
		 ques2[0]='\0';
		 strcpy(opa,"A.Iran ");
		 strcpy(opb,"B.Russia ");
		 strcpy(opc,"C.Saudi arabia ");
		 strcpy(opd,"D.Venezuela ");
		 ans='C';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 8:strcpy(ques1,"The oldest mountain system of india is ");
		 ques2[0]='\0';
		 strcpy(opa,"A.Aravallis ");
		 strcpy(opb,"B.Himalayas ");
		 strcpy(opc,"C.Shiwaliks ");
		 strcpy(opd,"D.Vindhyas ");
		 ans='A';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 9:strcpy(ques1,"Which of the following is the best conductor ");
		  strcpy(ques2,"of electricity ");
		 strcpy(opa," A.ordinary water");
		 strcpy(opb," B.Sea water");
		 strcpy(opc," C.Boiled water ");
		 strcpy(opd," D.Distilled water ");
		 ans='B';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	  }
   case 5:srand(time(0));
	 q=rand()%10;
	 level=6;
	 switch(q)
	  {
	  case 0: strcpy(ques1,"Which of the following is not one of powerpoint view?");
		  ques2[0]='\0';
		 strcpy(opa,"A.Slide Show view ");
		 strcpy(opb,"B. Slide view");
		 strcpy(opc,"C.Presentaion view");
		 strcpy(opd,"D.Outline view ");
		 ans='D';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		 break;
	   case 1: strcpy(ques1," Radioactivity is measured by?");
		  ques2[0]='\0';
		 strcpy(opa,"A.Hydrometer");
		 strcpy(opb,"B.Geiger Counter ");
		 strcpy(opc,"C.Seismometer");
		 strcpy(opd,"D.Ammeter ");
		 ans='B';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 2:  strcpy(ques1," The most important ore of Aluminium is-");
		   ques2[0]='\0';
		 strcpy(opa," A.Bauxite");
		 strcpy(opb," B.Calamine");
		 strcpy(opc," C.Calcite");
		 strcpy(opd," D.Galena");
		 ans='A';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 3:strcpy(ques1," Which is the highest gallantry award in India?");
		 ques2[0]='\0';
		 strcpy(opa," A.Param Vishishtat Seva Medal ");
		 strcpy(opb," B.Param Vir Chakra");
		 strcpy(opc," C.Kirti Chakra");
		 strcpy(opd," D.Vir Chakra");
		 ans='B';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		    break;
	   case 4: strcpy(ques1,"The leading coffee producing State of India is?");
		  ques2[0]='\0';
		 strcpy(opa,"A.Andhra Pradesh ");
		 strcpy(opb,"B.Kerala ");
		 strcpy(opc,"C.Karnataka");
		 strcpy(opd,"D.Tamil Nadu ");
		 ans='C';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 5: strcpy(ques1,"Where did the 1st ODI match was played in India?");
		  ques2[0]='\0';
		 strcpy(opa,"A.New Delhi ");
		 strcpy(opb,"B.Ahmedabad");
		 strcpy(opc,"C.Kolkata ");
		 strcpy(opd,"D.Mumbai ");
		 ans='B';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 6:strcpy(ques1,"Which of the following folk dance forms is associated\n");
		  strcpy(ques2,"with Gujarat?");
		 strcpy(opa,"A.Nautanki ");
		 strcpy(opb,"B.Garba ");
		 strcpy(opc,"C.Kathakali");
		 strcpy(opd,"D.Bhangra");
		 ans='B';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		   break;
	   case 7:  strcpy(ques1," What is full form HTTP ?");
		   ques2[0]='\0';
		 strcpy(opa," A.High Text Transfer protocol");
		 strcpy(opb," B. Hyper Text Transfer Procedure");
		 strcpy(opc," C.Hyper Text Transfer Protocol");
		 strcpy(opd," D.Hyper Typo Transfer Protocol");
		 ans='C';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		     break;
	   case 8:  strcpy(ques1,"What is full form of CRT ? ");
		    ques2[0]='\0';
		 strcpy(opa,"A.Crystal Ray Tube");
		 strcpy(opb,"B.Cathode Ray Tube ");
		 strcpy(opc,"C.Cabin Ray Tube  ");
		 strcpy(opd,"D.CAebon Ray Tube ");
		 ans='B';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		      break;
	   case 9:  strcpy(ques1,"How many bones does an elephant's trunk have?");
		   ques2[0]='\0';
		 strcpy(opa," A.5");
		 strcpy(opb," B.1");
		 strcpy(opc," C.10");
		 strcpy(opd," D.0");
		 ans='D';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	  }
  case 6:srand(time(0));
	 q=rand()%10;
	 level=7;
	 switch(q)
	  {
	  case 0:strcpy(ques1,"Which actress got married to Siddarth");
		 strcpy(ques2,"Roy Kapur in 2012");
		 strcpy(opa,"A.Prachi Desai ");
		 strcpy(opb,"B.Lisa Ray");
		 strcpy(opc,"C.Vidhya Balan");
		 strcpy(opd,"D.Sushmita Se ");
		 ans='C';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		 break;
	   case 1:strcpy(ques1,"What does 'F' stands for in the");
		 strcpy(ques2,"Motorsports popularly known as F1?");
		 strcpy(opa,"A.Fast");
		 strcpy(opb,"B.Force");
		 strcpy(opc,"C.Formula");
		 strcpy(opd,"D.Fly");
		 ans='C';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 2:strcpy(ques1,"Which of these personalities is ");
		 strcpy(ques2,"known as 'Flying Sikh' ?");
		 strcpy(opa,"A.Yuvraj Singh");
		 strcpy(opb,"B.Harbhajan Singh");
		 strcpy(opc,"C.Navjot Singh Sidhu");
		 strcpy(opd,"D.Milka Singh");
		 ans='D';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 3:strcpy(ques1,"Which of these cricketers has");
		 strcpy(ques2,"captained two differenf IPL teams?");
		 strcpy(opa,"A.Harbhajan Singh");
		 strcpy(opb,"B.Gautam Gambhir");
		 strcpy(opc,"C.Virendar Sehwag");
		 strcpy(opd,"D.Anil Kumble");
		 ans='B';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 4:strcpy(ques1,"Which of the following is not the");
		 strcpy(ques2,"name of facebook functionality?");
		 strcpy(opa,"A.Like");
		 strcpy(opb,"B.Share");
		 strcpy(opc,"C.Poke");
		 strcpy(opd,"D.Tweet");
		 ans='D';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 5:strcpy(ques1,"Who administered the oath of office to");
		 strcpy(ques2,"Dr.Manmohan Singh when he become P.M for 1st time");
		 strcpy(opa,"A.Pratibha Patil");
		 strcpy(opb,"B.A.P.J Abdul Kalam");
		 strcpy(opc,"C.K.R. Narayan");
		 strcpy(opd,"D.Shankar Dayal Sharma");
		 ans='B';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 6:strcpy(ques1,"What is the full form of MAC ?");
		 ques2[0]='\0';
		 strcpy(opa,"A.Mass Access Control");
		 strcpy(opb,"B.Media Access Control");
		 strcpy(opc,"C.Mass Access Carriage");
		 strcpy(opd,"D.Media Access Carriage");
		 ans='B';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		   break;
	   case 7:strcpy(ques1,"An alloy used in making heating element");
		 strcpy(ques2,"for electric heating devices is ?");
		 strcpy(opa,"A.Solder");
		 strcpy(opb,"B.Alloysteel");
		 strcpy(opc,"C.Nichrome");
		 strcpy(opd,"D.German Silver");
		 ans='C';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 8:strcpy(ques1,"Balloons are filled with ?");
		 ques2[0]='\0';
		 strcpy(opa,"A.Helium");
		 strcpy(opb,"B.Oxygen");
		 strcpy(opc,"C.Nitrogen");
		 strcpy(opd,"D.Argon");
		 ans='A';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 9: strcpy(ques1,"Who among these was the daughter of");
		 strcpy(ques2,"Sultan Iltutmish ?");
		 strcpy(opa,"A.Noor Jahan");
		 strcpy(opb,"B.Razia Sultan");
		 strcpy(opc,"C.Arjumand Banu");
		 strcpy(opd,"D.Anarkali");
		 ans='B';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	  }

   case 7:srand(time(0));
	 q=rand()%10;
	 level=8;
	 switch(q)
	  {
	  case 0:strcpy(ques1,"B.C.Roy Award is given in the field of ");
		 ques2[0]='\0';
		 strcpy(opa,"A.Music ");
		 strcpy(opb,"B.Journalism ");
		 strcpy(opc,"C.medicine ");
		 strcpy(opd,"D.environment ");
		 ans='C';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		 break;
	   case 1:strcpy(ques1,"What is full form of ISP ");
		 ques2[0]='\0';
		 strcpy(opa,"Internet service provider ");
		 strcpy(opb,"Internet speed provider ");
		 strcpy(opc,"Intranet service provider ");
		 strcpy(opd,"Internet service proceeder ");
		 ans='A';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 2:strcpy(ques1,"The longest and largest bone in ");
		  strcpy(ques2," human Body is");
		 strcpy(opa,"A.Spinal cord ");
		 strcpy(opb,"B.Humerus ");
		 strcpy(opc,"C.Fibula ");
		 strcpy(opd,"D.Femur ");
		 ans='D';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 3:strcpy(ques1,"what is the name of the Disease in man  ");
		  strcpy(ques2,"arising out of Vitamin B1 deficiency ");
		 strcpy(opa,"A.Scurvy ");
		 strcpy(opb,"B.Beriberi");
		 strcpy(opc,"C.Pellagra ");
		 strcpy(opd,"D.Gingivitis ");
		 ans='B';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 4:strcpy(ques1,"The Book of Parsis is ");
		 ques2[0]='\0';
		 strcpy(opa,"A.torah ");
		 strcpy(opb,"B.Bible ");
		 strcpy(opc,"C.Zend avesta ");
		 strcpy(opd,"D.Gita ");
		 ans='C';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 5:strcpy(ques1,"Space application centre(SAC) is located at ");
		 ques2[0]='\0';
		 strcpy(opa,"A.Mumbai ");
		 strcpy(opb,"B.ahmadabad ");
		 strcpy(opc,"C.trivandrum ");
		 strcpy(opd,"D.None ");
		 ans='B';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 6:strcpy(ques1,"The code name of the first vehicle driven ");
		  strcpy(ques2,"by man on the moon's surface was ");
		 strcpy(opa,"A.Luna 22 ");
		 strcpy(opb,"B.Rover ");
		 strcpy(opc,"C.Eagle ");
		 strcpy(opd,"D.Challenger ");
		 ans='B';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		   break;
	   case 7:strcpy(ques1,"How many times did Geet Sethi win the IBSF  ");
		  strcpy(ques2,"world Billiards title ");
		 strcpy(opa,"A.2 ");
		 strcpy(opb,"B.3 ");
		 strcpy(opc,"C.4 ");
		 strcpy(opd,"D.5 ");
		 ans='B';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 8:strcpy(ques1,"Where did the first ODI match was played ");
		  strcpy(ques2," in India");
		 strcpy(opa,"A.New Delhi ");
		 strcpy(opb,"B.Ahmedabad ");
		 strcpy(opc,"C.kolkata ");
		 strcpy(opd,"D.Mumbai ");
		 ans='B';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 9:strcpy(ques1,"The most important are of Aluminium is ");
		 ques2[0]='\0';
		 strcpy(opa,"A.Bauxite ");
		 strcpy(opb,"B.Calamine ");
		 strcpy(opc,"C.Calcite ");
		 strcpy(opd,"D.Galena ");
		 ans='A';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	  }
  case 8:srand(time(0));
	 q=rand()%10;
	 level=9;
	 switch(q)
	  {
	  case 0:strcpy(ques1," The 1st Indian Remote Sensing Satellite was launched\n");
		 strcpy(ques2," into space on");
		 strcpy(opa,"A.1984 ");
		 strcpy(opb,"B.1989 ");
		 strcpy(opc,"C.1988");
		 strcpy(opd,"D.1990 ");
		 ans='D';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		 break;
	   case 1: strcpy(ques1," The code name of the 1st vehicle driven by man\n");
		 strcpy(ques2,"on the moon's surface was?");
		 strcpy(opa,"A.Luna 22 ");
		 strcpy(opb,"B.Rover  ");
		 strcpy(opc,"C.Eagle  ");
		 strcpy(opd,"D. Challenger");
		 ans='B';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 //MAX;
		  break;
	   case 2: strcpy(ques1,"Indian won its first olympic hockey gold in...?");
		 ques2[0]='\0';
		 strcpy(opa," A.1928");
		 strcpy(opb," B.1932");
		 strcpy(opc," C.1936");
		 strcpy(opd," D.1948");
		 ans='A';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 3: strcpy(ques1," The Headquarters of UNEP are located at?");
		  ques2[0]='\0';
		 strcpy(opa,"A.Berne  ");
		 strcpy(opb,"B.Nairobi ");
		 strcpy(opc,"C.New York");
		 strcpy(opd,"D. Vienna");
		 ans='C';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 4: strcpy(ques1," A narrow strip of land boarded on both sides by\n");
		  strcpy(ques2,"water, connecting two large bodies of land is known as?");
		 strcpy(opa,"A.An isthmus ");
		 strcpy(opb,"B.A lagoon  ");
		 strcpy(opc,"C.A peninsula  ");
		 strcpy(opd,"D.A Stratt");
		 ans='A';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 5: strcpy(ques1,"The element  common to all acids is- ");
		  ques2[0]='\0';
		 strcpy(opa,"A.Oxygen ");
		 strcpy(opb,"B. Hydrogen ");
		 strcpy(opc,"C.Nitrogen ");
		 strcpy(opd,"D.Sulphur");
		 ans='B';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 6: strcpy(ques1," Which of the following is a non-metal that remains\n");
		  strcpy(ques2,"liquid in room temprature ?");
		 strcpy(opa,"A.Bromine  ");
		 strcpy(opb,"B.Chlorine ");
		 strcpy(opc,"C.Helium ");
		 strcpy(opd,"D.Phosphorus ");
		 ans='A';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		   break;
	   case 7: strcpy(ques1,"The National Anthem was 1st sung in the year? ");
		   ques2[0]='\0';
		 strcpy(opa,"A.1911 ");
		 strcpy(opb,"B.1913 ");
		 strcpy(opc,"C.1936");
		 strcpy(opd,"D.1935");
		 ans='A';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 8: strcpy(ques1," The last Mahakumbh of the 20th century was held at?");
		 ques2[0]='\0';
		 strcpy(opa,"A.Nasik ");
		 strcpy(opb,"B.Ujjain ");
		 strcpy(opc,"C.Allahabad ");
		 strcpy(opd,"D.Haridwar ");
		 ans='D';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 9: strcpy(ques1,"In which year was the Bharat Ratna instituted? ");
		   ques2[0]='\0';
		 strcpy(opa,"A.1954 ");
		 strcpy(opb,"B.1952");
		 strcpy(opc,"C.1956");
		 strcpy(opd,"D.1945 ");
		 ans='A';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	  }
  case 9:srand(time(0));
	 q=rand()%10;
	 level=10;
	 switch(q)
	  { case 0:strcpy(ques1,"What is meaning of FORTRAN ");
		  ques2[0] ='\0';
		 strcpy(opa,"A.Formula train ");
		 strcpy(opb,"B.Formula translation ");
		 strcpy(opc,"C.Formula train network");
		 strcpy(opd,"D.Formula translation network ");
		 ans='B';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		 break;
	   case 1: strcpy(ques1,"Who is the author of famous book 'Thoughts On Pakistan'?");
		 ques2[0]='\0';
		 strcpy(opa," A.Dr. B.R.Amedkar");
		 strcpy(opb," B.Mohammad Ali Jinnah");
		 strcpy(opc," C.P.T.Nehru");
		 strcpy(opd," D.Mahatma Gandhi");
		 ans='A';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 2:strcpy(ques1," Capital of India was transferred from calcutta\n");
		 strcpy(ques2,"to Delhi in the year");
		 strcpy(opa,"A.1913 ");
		 strcpy(opb,"B.1911 ");
		 strcpy(opc,"C.1915 ");
		 strcpy(opd,"D.1910");
		 ans='B';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 3:strcpy(ques1," The constituent Assembly of India was created under?");
		 ques2[0]='\0';
		 strcpy(opa,"A. Cripps Mission Plan");
		 strcpy(opb,"B. Cabinet Mission Plan");
		 strcpy(opc,"C. Both A and B");
		 strcpy(opd,"D.None of these ");
		 ans='B';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 4:strcpy(ques1,"Who gives 'Saare Jahan se Accha Hindustan Hamara'\n");
		 strcpy(ques2,"famous dialogue?");
		 strcpy(opa,"A.Ikbal ");
		 strcpy(opb,"B.Subhash Chandra Bos ");
		 strcpy(opc,"C.Bhagat Singh ");
		 strcpy(opd,"D. Chandra Shekhar Azad");
		 ans='A';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 5:strcpy(ques1,"The nickname of Glenn McGrath is what? ");
		 ques2[0]='\0';
		 strcpy(opa,"A.Ooh Ahh ");
		 strcpy(opb,"B.Penguin ");
		 strcpy(opc,"C.Big Bird ");
		 strcpy(opd,"D.Pigeon");
		 ans='D';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 6:strcpy(ques1," Which is the highest gallantry award in India?");
		 ques2[0]='\0';
		 strcpy(opa,"A.Param Vishishtat seva Medal ");
		 strcpy(opb,"B.Param vir Chakra ");
		 strcpy(opc,"C.Kirti Chakra ");
		 strcpy(opd,"D. Vir Chakra");
		 ans='B';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		   break;
	   case 7:strcpy(ques1," What is full form of ISDN?");
		  ques2[0]='\0';
		 strcpy(opa,"A.Integrated Services Digial Network ");
		 strcpy(opb,"B.Integrated Services Double Network ");
		 strcpy(opc,"C.Inter Services Digital Network ");
		 strcpy(opd,"D.Integrated Server Digital Network");
		 ans='A';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 8:strcpy(ques1," Which part of human brain is affected by alcohol?");
		 ques2[0]='\0';
		 strcpy(opa,"A.Cerebrum ");
		 strcpy(opb,"B.Cerebellum ");
		 strcpy(opc,"C.Medulla Oblongata");
		 strcpy(opd,"D.Corpus Callosum ");
		 ans='B';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 9:strcpy(ques1," Which is the first Harry Potter book?");
		 ques2[0]='\0';
		 strcpy(opa,"A. HP and the Goblet of Fire ");
		 strcpy(opb,"B. HP and the Philosopher's Stone");
		 strcpy(opc,"C. HP and the chamber of Secrets");
		 strcpy(opd,"D. None of these");
		 ans='B';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	  }

   case 10:srand(time(0));
	 q=rand()%10;
	 level=11;
	 switch(q)
	  {
	   case 0:strcpy(ques1,"The 1st Indian Remote Sensing Satellite was launched\n");
		 strcpy(ques2,"into space on");
		 strcpy(opa,"A.1984 ");
		 strcpy(opb,"B.1989 ");
		 strcpy(opc,"C.1988");
		 strcpy(opd,"D.1990 ");
		 ans='D';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		 break;
	   case 1:strcpy(ques1,"Indian's satellite launch-pad is located at..?");
		  ques2[0]='\0';
		 strcpy(opa,"A.Thumba ");
		 strcpy(opb,"B.Shri Hari Kota");
		 strcpy(opc,"C.Ahmedabad ");
		 strcpy(opd,"D.Dehradun");
		 ans='B';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 2:strcpy(ques1,"Who was the 1st woman in space ?");
		  ques2[0]='\0';
		 strcpy(opa,"A.Salley ride ");
		 strcpy(opb,"B.Christa McCauliffe ");
		 strcpy(opc,"C.Lori Garver ");
		 strcpy(opd,"D.Valentina Tereshkova");
		 ans='D';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 3:strcpy(ques1," German Silver is an alloy of-?");
		  ques2[0] ='\0';
		 strcpy(opa,"A.Copper, Silver & Nickel ");
		 strcpy(opb,"B.Silver ,Copper & Aluminium ");
		 strcpy(opc,"C.Zinc , Copper & Nickel ");
		 strcpy(opd,"D.Silver ,Zinc & Nickel ");
		 ans='C';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 4:strcpy(ques1,"In India, under which Union Ministry does the\n");
		  strcpy(ques2," 'Rajbhasha Vibhag' functions? ");
		 strcpy(opa,"A. Home affairs");
		 strcpy(opb,"B. HRD");
		 strcpy(opc,"C. culture ");
		 strcpy(opd,"D. Law & Justice");
		 ans='A';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 5:strcpy(ques1,"which among these is an island country? ");
		  ques2[0]='\0';
		 strcpy(opa,"A.Yemen ");
		 strcpy(opb,"B.Maldives");
		 strcpy(opc,"C.Oman ");
		 strcpy(opd,"D. Peru");
		 ans='B';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 6:strcpy(ques1," What do the five rings of the Olympics represent?");
		  ques2[0]='\0';
		 strcpy(opa,"A.Five games ");
		 strcpy(opb,"B.Five languages ");
		 strcpy(opc,"C.Five continents");
		 strcpy(opd,"D.Five oceans ");
		 ans='C';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		   break;
	   case 7:strcpy(ques1," Which of these tourist attractions is situated\n");
		  strcpy(ques2,"on an island?");
		 strcpy(opa,"A. Ellora Caves");
		 strcpy(opb,"B. Ajanta Caves");
		 strcpy(opc,"C. Kanheri caves");
		 strcpy(opd,"D. Elephant caves");
		 ans='D';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		  }
		  break;
	   case 8:strcpy(ques1,"Which of these is a chemical element present in the\n");
		 strcpy(ques2,"the periodic table?");
		 strcpy(opa,"A.Americium ");
		 strcpy(opb,"B.Asiacium");
		 strcpy(opc,"C.Eurocium ");
		 strcpy(opd,"D.Africium ");
		 ans='A';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 9:strcpy(ques1,"Which of these brands of pens is named after highest\n ");
		  strcpy(ques2," peak in Western Europe?");
		 strcpy(opa,"A.Reynolds ");
		 strcpy(opb,"B.Montblanc ");
		 strcpy(opc,"C.Faber-castell ");
		 strcpy(opd,"D.Sheffer ");
		 ans='B';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;


	  }
  case 11:srand(time(0));
	 q=rand()%10;
	 level=12;
	 switch(q)
	  {
	  case 0:strcpy(ques1,"The Words 'Satyameva Jayate'inscribed below  ");
		 strcpy(ques2,"the base plate of the emblem of india are taken from?");
		 strcpy(opa,"A.Rigveda ");
		 strcpy(opb,"B.Satpath Brahmana ");
		 strcpy(opc,"C.Mundak Upanishad ");
		 strcpy(opd,"D.Ramayana ");
		 ans='C';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		 break;
	   case 1:strcpy(ques1,"Who was the first woman in space? ");
		  ques2[0]='\0';
		 strcpy(opa,"A.Sally Ride ");
		 strcpy(opb,"B.Christa mcCauliffe ");
		 strcpy(opc,"C.lori garver ");
		 strcpy(opd,"D.valentina tereshkova ");
		 ans='D';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 2:strcpy(ques1,"yuri gagarin was the first man in space . ");
		  strcpy(ques2,"what year did he fly?");
		 strcpy(opa,"A.1958 ");
		 strcpy(opb,"B.1961");
		 strcpy(opc,"C.1963 ");
		 strcpy(opd,"D.1968 ");
		 ans='B';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 3:strcpy(ques1,"IN which year did milkha singh win the");
		  strcpy(ques2,"first national title in the 400 m race? ");

		 strcpy(opa,"A.1955 ");
		 strcpy(opb,"B.1956 ");
		 strcpy(opc,"C.1957 ");
		 strcpy(opd,"D.1970 ");
		 ans='C';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 4:strcpy(ques1,"The first Transplantation in India was in the year?");
		  ques2[0]='\0';
		 strcpy(opa,"A.3rd August 1994 ");
		 strcpy(opb,"B.13th August 1994 ");
		 strcpy(opc,"C.3rd September 1994 ");
		 strcpy(opd,"D.13th September 1994 ");
		 ans='A';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 5:strcpy(ques1,"Which is the smallest disteict of India by the area");
		  strcpy(ques2,"located?");

		 strcpy(opa,"A.puducherry");
		 strcpy(opb,"B.Chandigarh");
		 strcpy(opc,"C.Daman and Diu");
		 strcpy(opd,"D.Lakshadweep");
		 ans='A';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 6:strcpy(ques1,"Who was the first member of the Gandhi Family to win a lok");
		  strcpy(ques2,"election from Amethi?");

		 strcpy(opa,"A.Sanjay Gandni");
		 strcpy(opb,"B.Rajiv Gandhi");
		 strcpy(opc,"C.Feroze Gandhi");
		 strcpy(opd,"D.Rahul Gandhi");
		 ans='A';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		   break;
	   case 7:strcpy(ques1,"Who has been the youngest prsident of");
		  strcpy(ques2,"the Indian national congress?");
		 strcpy(opa,"A.Rajiv Gandhi");
		 strcpy(opb,"B.Sarojini Naidu");
		 strcpy(opc,"C.Sir Henry Cotton");
		 strcpy(opd,"D.Maulana Abul kalam Azad");
		 ans='D';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 8:strcpy(ques1,"On which mission did Neil Armstrong first go into space?");
		  ques2[0]='\0';

		 strcpy(opa,"A.Apollo 11");
		 strcpy(opb,"B.Gemini 8");
		 strcpy(opc,"Apollo 8");
		 strcpy(opd,"Ranger 8");
		 ans='B';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 9:strcpy(ques1,"Which state has the highest coal reserve in India?");
		 ques2[0]='\0';
		 strcpy(opa,"Jharkhand ");
		 strcpy(opb,"Orissa ");
		 strcpy(opc,"Chattisgarh ");
		 strcpy(opd,"Andhra Pradesh ");
		 ans='A';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	  }

   case 12:srand(time(0));
	 q=rand()%10;
	 level=13;
	 switch(q)
	  {
	  case 0:strcpy(ques1,"Who among these conquerors was the 1st to\n");
		  strcpy(ques2,"invade India?") ;
		 strcpy(opa," A.Timur");
		 strcpy(opb," B.Nadir Shah");
		 strcpy(opc," C.Ahmad Shah Durrani");
		 strcpy(opd," D.Babur");
		 ans='A';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		 break;
	   case 1:strcpy(ques1," Who was the 1st woman to became CEO of the\n");
		  strcpy(ques2," soft drink giant PepsiCo?");
		 strcpy(opa,"A.Virginia Rometty ");
		 strcpy(opb,"B.Indra Nooyi");
		 strcpy(opc,"C.Indra Bajaj ");
		 strcpy(opd,"D. Meg Whitman");
		 ans='B';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 2:strcpy(ques1,"Which of these sportswomen is a five-time world\n");
		 strcpy(ques2," champion in her sports?");
		 strcpy(opa,"A.Deepika Kumari ");
		 strcpy(opb,"B.M.C Marry Kom ");
		 strcpy(opc,"C.Krishna poonia ");
		 strcpy(opd,"D.Sania Nehwal ");
		 ans='B';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 3:strcpy(ques1," Yuri Gagarin was the 1st man in space.\n");
		  strcpy(ques2,"What year did he fly?");
		 strcpy(opa," A.1958");
		 strcpy(opb," B.1961");
		 strcpy(opc," C.1963");
		 strcpy(opd," D.1968");
		 ans='B';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 4:strcpy(ques1," Who among the following is NOT associated with\n");
		 strcpy(ques2,"billiards in India?");
		 strcpy(opa," A.Subhash Agarwal");
		 strcpy(opb," B.Ashok Shandilya");
		 strcpy(opc," C.Manoj kotharj");
		 strcpy(opd," D.Mihir Sen");
		 ans='D';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 5:strcpy(ques1," The Asian Games were held in Delhi for 1st time in?");
		  ques2[0]='\0';
		 strcpy(opa,"A. 1951");
		 strcpy(opb,"B. 1963");
		 strcpy(opc,"C. 1971");
		 strcpy(opd,"D. 1982");
		 ans='A';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 6:strcpy(ques1," Who was the author of the famous storybook\n");
		 strcpy(ques2," 'Alice's Adventures in Wonderland?");
		 strcpy(opa," A.Rudyard Kipling");
		 strcpy(opb," B.John keats");
		 strcpy(opc," C.Lewis Carroll");
		 strcpy(opd," D. H G Wells");
		 ans= 'C';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		   break;
	   case 7:strcpy(ques1,"Where in Gujarat is the Tata Nano Plant located? ");
		   ques2[0]='\0';
		 strcpy(opa,"A.Pobandar ");
		 strcpy(opb,"B.Khambat ");
		 strcpy(opc,"C.Anand ");
		 strcpy(opd,"D.Sanand ");
		 ans='D';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 8:strcpy(ques1,"Which city in Madhya Pradesh is known for the legendary\n");
		 strcpy(ques2,"love story of Baz Bahadur and Rani Roopmati?");
		 strcpy(opa,"A. Anjaneri ");
		 strcpy(opb,"B. Mandu  ");
		 strcpy(opc,"C. Dabhoi ");
		 strcpy(opd,"D. Chanderi");
		 ans='B';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 9:strcpy(ques1," What is the Marathi language channel of ");
		  strcpy(ques2,"Doordarshan called?");

		 strcpy(opa," A.DD Sahyadri");
		 strcpy(opb," B.DD Saptagiri ");
		 strcpy(opc," C.DD Bharti");
		 strcpy(opd," D.DD chandana");
		 ans='A';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	  }
  case 13:srand(time(0));
	 q=rand()%10;
	 level=14;
	 switch(q)
	  {
	   case 0:strcpy(ques1,"Which of these personalities has won both a Nobel\n");
		 strcpy(ques2,"and an oscar?");
		 strcpy(opa,"A. Pearl S.Buck");
		 strcpy(opb,"B. Ernest Hemingway");
		 strcpy(opc,"C. G.B.Shaw");
		 strcpy(opd,"D. T.S.Eliot");
		 ans='C';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		 break;
	   case 1:strcpy(ques1,"Which entrepreneur's autobiographical work is titled\n");
		  strcpy(ques2," 'It Happened in India'? ");
		 strcpy(opa,"A.N.R. Narayana Murty ");
		 strcpy(opb,"B. Vijay Mallya");
		 strcpy(opc,"C. P.Gopinath ");
		 strcpy(opd,"D.Kishore Biyani ");
		 ans='D';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		  {
		 //MAX;
		 }
		  break;
	   case 2: strcpy(ques1," What was the name of the rover sent by NASA that\n");
		  strcpy(ques2," landed on Mars in August,2012? ");
		 strcpy(opa,"A.Odyssey ");
		 strcpy(opb,"B.Discovery ");
		 strcpy(opc,"C. Challenger");
		 strcpy(opd,"D. Curiosity");
		 ans='D';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 3: strcpy(ques1," Which of these countries is not a part of BRICS,\n ");
		 strcpy(ques2,"an association of leading emerging economies?");
		 strcpy(opa,"A.China ");
		 strcpy(opb,"B.India ");
		 strcpy(opc,"C.Canada");
		 strcpy(opd,"D.Russia ");
		 ans='C';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 4: strcpy(ques1,"What was the first ministerial portfolio held by\n ");
		 strcpy(ques2," Indira Gandhi?");
		 strcpy(opa,"A.Home Affairs ");
		 strcpy(opb,"B.Information and broadcastting ");
		 strcpy(opc,"C. Sceince & Technology");
		 strcpy(opd,"D.Education ");
		 ans='B';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 5: strcpy(ques1," Who was called ' father of the Lok Sabha' by Pandit Nehru?");
		   ques2[0] ='\n';
		 strcpy(opa,"A.U N Dhebar ");
		 strcpy(opb,"B.G V Mavalankar ");
		 strcpy(opc,"C.J B kripalani ");
		 strcpy(opd,"D.R K Shanmukham Chetty ");
		 ans='B';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 6: strcpy(ques1," Who presised over the inaugural meeting of the Constituent\n");
		  strcpy(ques2," Asembly of India?")  ;
		 strcpy(opa," A.Sachchidananda Sinha");
		 strcpy(opb," B.P.Upendra");
		 strcpy(opc," C.B.R.Ambedkar");
		 strcpy(opd," D.Dr.Rajendra Prasad");
		 ans='A';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		   break;
	   case 7: strcpy(ques1,"The idea of the constittution of India was 1st\n");
		   strcpy(ques2,"of all given by?");
		 strcpy(opa,"A.Dr. B.R. Ambedkar ");
		 strcpy(opb,"B.Jawaharlal Nehru ");
		 strcpy(opc,"C.Shri M.N.Roy ");
		 strcpy(opd,"D.Mahatma Gandhi ");
		 ans='C';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 8: strcpy(ques1,"The 1st session of the constituent Assembly was held in?");
		  ques2[0]='\0';
		 strcpy(opa,"A.Bombay ");
		 strcpy(opb,"B.Lahore ");
		 strcpy(opc,"C.Calcutta ");
		 strcpy(opd,"D.New Delhi ");
		 ans='D';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 9: strcpy(ques1,"The Indian Constituent was enforced on?");
		  ques2[0] ='\0';
		 strcpy(opa,"A. 15th Aug, 1947");
		 strcpy(opb,"B. 26th Nov, 1949");
		 strcpy(opc,"C. 26th Jan, 1950");
		 strcpy(opd,"D. 30th Jan, 1950");
		 ans='B';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	  }
   case 14:srand(time(0));
	 q=rand()%10;
	 level=15;
	 switch(q)
	  {
		  case 0:strcpy(ques1,"When was the Madras state renamed Tamil Nadu? ");
		  ques2[0] ='\0';
		 strcpy(opa,"A.1968 ");
		 strcpy(opb,"B.1971 ");
		 strcpy(opc,"C.1969");
		 strcpy(opd,"D.1970 ");
		 ans='C';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		 break;
	   case 1:strcpy(ques1,"The 1st state to become bifurcated after independence was");
		 ques2[0]='\0';
		 strcpy(opa," A.Punjab ");
		 strcpy(opb," B.Assam");
		 strcpy(opc," C.Bombay");
		 strcpy(opd," D.Bengal");
		 ans='C';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 2:strcpy(ques1,"The 25th Indian state to achieve statehood is ? ");
		 ques2[0]='\0';
		 strcpy(opa," A.Sikkim ");
		strcpy(opb," B.Goa");
		 strcpy(opc," C.Arunachal Pradesh");
		 strcpy(opd," D.Mizoram");
		 ans='B';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 3:strcpy(ques1," The age of retirement of the judges of the HIgh Court is..?");
		  ques2[0]='\0';
		 strcpy(opa,"A.62 years ");
		 strcpy(opb,"B.60 years  ");
		 strcpy(opc,"C. 65 years  ");
		 strcpy(opd,"D. 58 years ");
		 ans='C';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 4:strcpy(ques1,"Cripps mission visited India in..? ");
		  ques2[0]='\0';
		 strcpy(opa,"A.1927 ");
		 strcpy(opb,"B.1946 ");

		 strcpy(opc,"C. 1939");
		 strcpy(opd,"D. 1942 ");
		 ans='D';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 {
		 //MAX;
		 }
		  break;
	   case 5:strcpy(ques1," Judge of the High Court are appointed by the..?");
		   ques2[0]='\0';
		 strcpy(opa,"A.Chief Justice of the High  Court ");
		 strcpy(opb,"B.President ");
		 strcpy(opc,"C.Governor ");
		 strcpy(opd,"D.Chief Justice Of India ");
		 ans='B';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		{
		// MAX;
		}
		  break;
	   case 6:strcpy(ques1,"Which of the following rights was described by Dr.B.R.Amedkar as The\n");
		  strcpy(ques2,"the Heart and soul constitution?");
		 strcpy(opa," A.Right to Equality ");
		 strcpy(opb," B.Right to constitutional Remedies");
		 strcpy(opc," C.Right to freedom of Religion ");
		 strcpy(opd," D.Right to property");
		 ans='B';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 //MAX;
		   break;
	   case 7:strcpy(ques1," The Cabinet Mission to India was headed by");
		  ques2[0]='\0';
		 strcpy(opa,"A.Stafford Cripps ");
		 strcpy(opb,"B.Hugh Gaitskell ");
		 strcpy(opc,"C.A.V. Alexender ");
		 strcpy(opd,"D.Lord Pethick Lawrence ");
		 ans='D';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 //MAX;
		  break;
	   case 8:strcpy(ques1,"Chairman of constitution Drafting comitee at the time of\n");
		  strcpy(ques2,"independece was..?");
		 strcpy(opa," A.Sardar Patel ");
		 strcpy(opb," B. B.R.Ambedkar ");
		 strcpy(opc," C.S. Radhakrishnan");
		 strcpy(opd," D.J.L. Nehru");
		 ans='B';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 //MAX;
		  break;
	   case 9:strcpy(ques1,"The High courts in India were first started at..? ");
		  ques2[0]='\0';
		 strcpy(opa," A.Bombay, Delhi,Madras");
		 strcpy(opb," B.Madras and Bombay");
		 strcpy(opc," C.Bombay , Madras ,Calcutta");
		 strcpy(opd," D.Delhi and Calcutta");
		 ans='C';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 //MAX;
		  break;
	  }
   case 15:srand(time(0));
	 q=rand()%10;
	 level=16;
	 switch(q)
	  {
	  case 0:strcpy(ques1,"The lifespan of Red Blood Cells is......days..? ");
		 ques2[0]='\0';
		 strcpy(opa," A.60");
		 strcpy(opb," B.120");
		 strcpy(opc," C.180");
		 strcpy(opd," D.240");
		 ans='B';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 //MAX;
		 break;
	   case 1: strcpy(ques1,"The last Europeon country engaged in trade\n");
		   strcpy(ques2,"with India was-");
		 strcpy(opa,"A. Portugal");
		 strcpy(opb,"B. Holland");
		 strcpy(opc,"C. France ");
		 strcpy(opd,"D. England");
		 ans='C';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 //MAX;
		  break;
	   case 2: strcpy(ques1,"The War which led to the establishment of Mughal\n");
		 strcpy(ques2,"Empire in India");
		 strcpy(opa,"A.1 Panipat War ");
		 strcpy(opb,"B.2 Panipat War");
		 strcpy(opc,"C.3 Panipat War");
		 strcpy(opd,"D.Kanwa War ");
		 ans='A';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 //MAX;
		  break;
	   case 3:strcpy(ques1,"The Central Asian Kingdom to which Babar was a king of..?");
		 ques2[0]='\0';
		 strcpy(opa,"A.Fargana  ");
		 strcpy(opb,"B.Kabul ");
		 strcpy(opc,"C.Ujbeg ");
		 strcpy(opd,"D.persia ");
		 ans='A';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		// MAX;
		  break;
	   case 4:strcpy(ques1,"Radioactivity was discovered by...?");
		  ques2[0]='\0';
		 strcpy(opa,"A.Kelvin");
		 strcpy(opb,"B.Thomson ");
		 strcpy(opc,"C.Rutherford ");
		 strcpy(opd,"D.Bacquerel ");
		 ans='D';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 //MAX;
		  break;
	   case 5:strcpy(ques1,"The Headquater of the international Court is suited at-? ");
		  ques2[0]='\0';
		 strcpy(opa,"A.New Yourk ");
		 strcpy(opb,"B.Hague ");
		 strcpy(opc,"C.Geneva ");
		 strcpy(opd,"D.Paris ");
		 ans='B';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 //MAX;
		  break;
	   case 6:strcpy(ques1,"The Mugal Emperor who introduced the Militray Strategy\n");
		 strcpy(ques2,"called Tulughama?");
		 strcpy(opa,"A.Aramshah");
		 strcpy(opb,"B.Akbar ");
		 strcpy(opc,"C.Humayun ");
		 strcpy(opd,"D.Babar ");
		 ans='D';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 //MAX;
		   break;
	   case 7:strcpy(ques1,"Errors in computer results could be due to? ");
		 ques2[0]='\0';
		 strcpy(opa,"A.Encoding of data ");
		 strcpy(opb,"B.Transmission of data ");
		 strcpy(opc,"C.Manipulation of data ");
		 strcpy(opd,"D.All of the above ");
		 ans='D';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 //MAX;
		  break;
	   case 8:strcpy(ques1," Which is the outermost planet in the solar system? ");
		  ques2[0]='\0';
		 strcpy(opa,"A.Mercury ");
		 strcpy(opb,"B.Pluto ");
		 strcpy(opc,"C.Neptune ");
		 strcpy(opd,"D.Uranus ");
		 ans='C';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 //MAX;
		  break;
	   case 9:strcpy(ques1,"Deficiency of vitamin-A results in...? ");
		    ques2[0]='\0';
		 strcpy(opa,"A.Night Blindness ");
		 strcpy(opb,"B.Rickets ");
		 strcpy(opc,"C.Scurvy ");
		 strcpy(opd,"D.Hair Fall");
		 ans='A';
		 main_s(level ,ques1,ques2,opa,opb,opc,opd,ans);
		 //MAX;
		  break;

	  }
   }
   getch();
   level++;
   }
   scr1();
   screen();
   getch();
   closegraph();
}

void tgt(int x,int y)
{
   setfillstyle(SOLID_FILL,14);
   fillellipse(x,y,60,60);
   setfillstyle(SOLID_FILL,BLACK);
   fillellipse(x,y,58,58);
   setfillstyle(SOLID_FILL,14);
   fillellipse(x,y,40,40);
   setfillstyle(SOLID_FILL,BLACK);
   fillellipse(x,y,38,38);
   setfillstyle(SOLID_FILL,14);
   fillellipse(x,y,20,20);
   setfillstyle(SOLID_FILL,BLACK);
   fillellipse(x,y,18,18);
   setfillstyle(SOLID_FILL,RED);
   fillellipse(x,y,5,5);
   setfillstyle(SOLID_FILL,14);
   bar(x-1,y-80,x+1,y-12);
   bar(x+12,y-1,x+80,y+1);
   bar(x-1,y+12,x+1,y+80);
   bar(x-80,y-1,x-12,y+1);
}
void hole(int x,int y)
{
  setcolor(BLACK);
  setfillstyle(10,RED);
  fillellipse(x,y,18,18);
  setfillstyle(1,RED);
  fillellipse(x,y,10,10);
}
void b_sound()
{
    int i,j;
   for(i=0;i<200;i=i+10)
   {
      sound(300-i);
      delay(10+i*.05);
    }
    nosound();
}
void tbb()
{
    int i,j;
    int poly[8];
    poly[0]=0;
    poly[1]=480;
    poly[2]=640;
    poly[3]=480;
    for(i=0;i<481;i=i+5)
    {
       poly[4]=640-i*.5;
       poly[5]=0+i;
       poly[6]=0+i*.5;
       poly[7]=0+i;
       cleardevice();
       setbkcolor(BLACK);
       setfillstyle(1,DARKGRAY);
       fillpoly(4,poly);
       delay(9-i*.02);
    }
    setfillstyle(9,GREEN);
    bar(0,0,5,480);
    bar(5,475,640,480);
    bar(635,0,640,475);
    bar(5,0,635,5);
    for(i=0;i<226;i=i+4)
    {
       cleardevice();

    setfillstyle(9,MAGENTA);
    bar(0,0,5,480);
    bar(5,475,640,480);
    bar(635,0,640,475);
    bar(5,0,635,5);

       setfillstyle(11,GREEN);
       bar(i+5,70,i+200,140);
       bar(640-i-220,140,640-i+50,210);
       delay(13);
    }
    settextstyle(0,0,6);
    setcolor(YELLOW);
    outtextxy(253,90,"THE");
    delay(5);
    setcolor(LIGHTBLUE);
    outtextxy(212,157,"BRAIN");
    setcolor(LIGHTGRAY);
    settextstyle(1,0,9);
    outtextxy(70,205,"SH");
    stgt(232,270);
    stgt(332,270);
    outtextxy(380,205,"TERS");
    delay(15);
    hole(232,270);
    b_sound();
    delay(15);
    hole(332,270);
    b_sound();
    delay(100);


    setlinestyle(3,1,1);
    setcolor(YELLOW);
    rectangle(67,365,157,405);
    rectangle(231,365,411,405);
    rectangle(465,365,545,405);
    settextstyle(3,0,3);
    setcolor(GREEN);
    outtextxy(72,367,"1.PLAY");
    outtextxy(237,367,"2.INSTRUCTIONS");
    outtextxy(471,367,"3.QUIT");
    setcolor(WHITE);
    settextstyle(2,0,6);
    outtextxy(60,430,"''Where Knowledge Turns Into Money With Every Shot''");
    return;
}
void stgt(int x,int y)
{
   setfillstyle(SOLID_FILL,14);
   fillellipse(x,y,40,40);
   setfillstyle(SOLID_FILL,BLACK);
   fillellipse(x,y,38,38);
   setfillstyle(SOLID_FILL,14);
   fillellipse(x,y,20,20);
   setfillstyle(SOLID_FILL,BLACK);
   fillellipse(x,y,18,18);
   setfillstyle(SOLID_FILL,RED);
   fillellipse(x,y,2,2);
   setfillstyle(SOLID_FILL,14);
   bar(x,y-55,x+1,y-8);
   bar(x+8,y,x+55,y+1);
   bar(x,y+8,x+1,y+55);
   bar(x-55,y,x-8,y+1);
}

void rules()
{
 int gd=DETECT,gm,i;
char c;
initgraph(&gd,&gm,"c:\\tc\\bgi");
setfillstyle(HATCH_FILL,13);
bar(0,0,5,475);
bar(0,0,635,5);
bar(632,0,637,475);
bar(0,475,637,480);
settextstyle(7,0,4);
setcolor(15);
outtextxy(200,50,"INSTRUCTIONS");
setlinestyle(DOTTED_LINE,0,14);
rectangle(180,40,470,100);
setcolor(14);
settextstyle(2,0,7);
outtextxy(20,120,"--> There are 16 level in all.");
setcolor(2);
outtextxy(20,150,"--> Each level contains one question.");
setcolor(3);
outtextxy(20,180,"    Each Question have 4 options of which one is");
outtextxy(20,200,"    the correct answer.");
outtextxy(20,220,"    Press the answer twice.");
outtextxy(20,240,"    If,");
outtextxy(20,260,"        Answer is correct --> level plus with reward");
outtextxy(20,280,"                Otherwise --> you loose the game");
setcolor(14);
outtextxy(20,310,"--> Three helplines :50-50,Double Dip,Expert advice");
outtextxy(20,330,"                     press H for help");
setcolor(2);
outtextxy(20,360,"--> 4 stages to fix the amount :");
outtextxy(20,380,"                             -> 1,60,000 ");
outtextxy(20,400,"                             -> 25 lakh");
outtextxy(20,420,"                             -> 1 crore");
outtextxy(20,440,"                             -> 7 crore");
getch();
cleardevice();
setfillstyle(HATCH_FILL,13);
bar(0,0,5,475);
bar(0,0,635,5);
bar(632,0,637,475);
bar(0,475,637,480);
settextstyle(7,0,4);
setcolor(15);
outtextxy(200,50,"INSTRUCTIONS");
setlinestyle(DOTTED_LINE,0,14);
rectangle(180,40,470,100);
setcolor(2);
settextstyle(2,0,7);
outtextxy(20,120,"-->Before this stage if you choose to quit then you");
outtextxy(20,140,"   will get the money in hand , but if you choose to");
outtextxy(20,160,"   play for the stage and you win then your winning ");
outtextxy(20,180,"   amount will be fixed to that. ");
outtextxy(20,210,"-->But if you loose then you will get the amount ");
outtextxy(20,230,"   of previous stage.");
setcolor(3);
outtextxy(20,260,"-->Answer the questions within time limit.");
setcolor(9);
outtextxy(20,290,"-->Press Q to quit.");
setcolor(5);
outtextxy(20,320,"************** PLAY FOR 10 CRORES ****************");
settextstyle(7,0,4);
setcolor(14);
outtextxy(180,370,"ALL THE BEST");
settextstyle(2,0,7);
setcolor(3);
outtextxy(50,420,"1.Play");
outtextxy(480,420,"2.Exit");

LC:
c=getch();
if(c=='1')
   return;
else if(c=='2')
  {
    getch();
    closegraph();
    exit(0);
  }
else
  goto LC;


}


void main_s(int level,char ques1[],char ques2[],char opa[],char opb[],char opc[],char opd[],char answer)
{
    int j=1,i=0,col,a[17];
    char ctemp;
    long int  itemp=1;
    aj[0]=answer;
    aj[1]='\0';

    cleardevice();

    //To set Money according to level
    m_w=mon[level-1];
    if((level==6)||(level==10)||(level==13))
       m_i_h=m_w;
    else if(level==16)
       {
	 m_i_h=50000000;
	 m_w=500000000;
       }
     else if(level<6)
     {
	 m_i_h=0;
     }
      //To convert money into string

     itemp=m_i_h;
     mih[0]='0';
    while((itemp!=0)||(i==0))
    {
      ctemp = (char)((itemp%10)+48);
      itemp = itemp/10;
      mih[i]= ctemp;
      i++;
    }
    mih[i]='\0';
    //printf("%ld ",m_i_h);
    strrev(mih);

    i=0;
    itemp=m_w;
    mw[0]='0';
    while((itemp!=0)||(i==0))
    {
      ctemp = (char)((itemp%10)+48);
      itemp = itemp/10;
      mw[i]= ctemp;
      i++;
    }
    mw[i]='\0';
    strrev(mw);

    //To set color and time according to level

    if(level<6)
      {
	col=10;
	tim=30;
      }
    else if(level<10)
      {
	 col=14;
	 tim=60;
      }
    else if(level<13)
      {
	 col=12;
	 tim=60;
      }
    else if(level<16)
      {
	 col=4;
	 tim=90;
      }
    else
      {
	 col=1;
	 tim=90;
      }

     //To set color for completed and incompleted levels

    for(j=1;j<17;j++)
    {
       if(j<level)
	 a[j]=7;
       else if(j>level)
	 a[j]=15;
       else
	 a[j]=col;
    }
    a[5]=10;    //Light Green
    a[9]=14;    //Yellow
    a[12]=12;   //Light Red
    a[15]=4;    //Red
    a[16]=1;    //Blue
    cleardevice();
    j=17;

    //Boundry
    setfillstyle(HATCH_FILL,13);
    bar(0,0,5,475);
    bar(0,0,635,5);
    bar(632,0,637,475);
    bar(0,475,637,480);
    bar(535,0,540,475);

    //16 bars for levels
    for(i=0;i<420;i=i+27)
    {
       j--;
       setfillstyle(SOLID_FILL,a[j]);
       bar(550,20+i,620,40+i);
       if(j==level)
	 rectangle(548,20+i-2,622,40+i+2);
    }
    setcolor(0);
    settextstyle(0,0,1);
    outtextxy(555,25,"10 Crore");
    outtextxy(555,51,"7 Crore");
    outtextxy(555,77,"5 Crore");
    outtextxy(555,104,"3 Crore");
    outtextxy(555,131,"1 Crore");
    outtextxy(555,158,"85 Lakh");
    outtextxy(555,185,"50 Lakh");
    outtextxy(555,212,"25 Lakh");
    outtextxy(550,239,"12,50,000");
    outtextxy(553,266,"5,00,000");
    outtextxy(553,295,"2,50,000");
    outtextxy(553,322,"1,60,000");
    outtextxy(553,349,"80,000");
    outtextxy(553,376,"40,000");
    outtextxy(553,403,"20,000");
    outtextxy(553,430,"10,000");
    setcolor(WHITE);
    outtextxy(550,450,"If Quit");
    outtextxy(550,459,mw);          //Money winning
    outtextxy(10,150,"If Loose");
    outtextxy(10,160,mih);          //Money in hand (Sureity)

    //For Boxes of ques and options
    setcolor(a[level]);
    setlinestyle(2,1,1);
    rectangle(30,245,520,325);
    rectangle(30,360,245,400);  //opa
    rectangle(315,360,520,400); //opb
    rectangle(30,415,245,455);  //opc
    rectangle(315,415,520,455); //opd

    //Box for Helpline
    setcolor(YELLOW);
    setlinestyle(0,1,3);
    rectangle(470,10,530,130);
    setlinestyle(2,1,1);
    line(470,50,530,50);
    line(470,90,530,90);
    setcolor(WHITE);
    settextstyle(1,0,1);
    outtextxy(479,12,"50");
    outtextxy(499,22,"50");
    outtextxy(485,60,"D D");
    outtextxy(485,100,"E A");

    if(h1==1)                              //module to be added...
       {
       for(i=0;i<8;i++)
	  {
	  setcolor(4);
	  line(470,10+i,530,45+i);
	  line(530,10-i,470,45-i);
	  }
	}
       if(h2==1)
       {
       for(i=0;i<8;i++)
	  {
	  setcolor(4);
	  line(470,50+i,530,85+i);
	  line(530,50-i,470,85-i);
	  }
       }
       if(h3==1)
       {
       for(i=0;i<8;i++)
	    {
	    setcolor(4);
	    line(470,90+i,530,125+i);
	    line(530,90-i,470,125-i);
	    }
       }                                             //....till here


    //Put Strings in Boxes
    setcolor(15);
    settextstyle(2,0,6);
    outtextxy(40,260,ques1);
    outtextxy(40,285,ques2);
    settextstyle(2,0,5);
    outtextxy(34,370,opa);
    outtextxy(319,370,opb);
    outtextxy(34,425,opc);
    outtextxy(319,425,opd);

    //Calling Clock and having options
    ansc=sclock(10,10,tim);


    if(ansc=='F')
    {
       setfillstyle(1,BLACK);
	 bar(72,10,450,230);
	 delay(500);
	 setcolor(RED);
	 settextstyle(3,0,7);
	 outtextxy(100,20," TIME");
	 outtextxy(180,80,"  OUT");
	 setcolor(GREEN);
	 settextstyle(2,0,6);
	 outtextxy(10,100,"Right Ans");
	 outtextxy(40,115,aj);
	 settextstyle(2,0,4);
	 setfillstyle(1,BLACK);
	 bar(200,459,330,475);
	 setcolor(RED);
	 outtextxy(245,460,"GAME OVER");
	 getch();
	 screen2(" GAME OVER",mih);
       getch();
       closegraph();
       exit(0);
   }
   else if(ansc=='H')
   {
      setcolor(GREEN);
      setlinestyle(0,1,3);
      rectangle(470,10,530,130);
      setlinestyle(2,1,1);
      line(470,50,530,50);
      line(470,90,530,90);

      settextstyle(2,0,4);
      setcolor(WHITE);
      outtextxy(463,140,"1:50-50");
      outtextxy(463,155,"2:Double Dip");
      outtextxy(463,170,"3:Exp Advice");
      HELP:
      h=getch();
      switch(h)
      {
	 case '1':
	 {
	  if(h1==0)
	  {
	    h1=1;
	    setfillstyle(1,BLACK);
	    bar(463,140,532,215);
	    //rectangle(463,140,532,215);
	       randomize();
	       flag1=random(4);
	       //printf("%d  %d %d   ",flag1,flag2,((int)answer-65));
	       {
	       if((flag1==0)&&(answer!='A'))
		    bar(31,361,244,399);  //opa
	       else if((flag1==1)&&(answer!='B'))
		  bar(316,361,519,399); //opb
	       else if((flag1==2)&&(answer!='C'))
		  bar(31,416,244,454);  //opc
	       else
		  {
		    if(answer=='D')
		    {
		      bar(31,361,244,399);  //opa
		      flag1=0;
		    }
		    else
		    {
		      bar(316,416,519,454); //opd
		      flag1=3;
		    }
		  }
	       }

	       flag2=random(4);
	       //printf("%d  %d",flag1,flag2);
	       {
	       if((flag2==0)&&(answer!='A'))
		  bar(31,361,244,399);  //opa
	       else if((flag2==1)&&(answer!='B'))
		  bar(316,361,519,399); //opb
	       else if((flag2==2)&&(answer!='C'))
		  bar(31,416,244,454);  //opc
	       else
		  {
		    if(answer=='D')
		    {
		      bar(31,361,244,399);  //opa
		      flag2=0;
		    }
		    else
		    {
		      bar(316,416,519,454); //opd
		      flag2=3;
		    }
		  }

	       if(flag1==flag2)
	       {
		   if(answer=='B')
		      {
			 if(flag1==2)
			    bar(31,361,244,399);  //opa
			 else
			    bar(31,416,244,454);  //opc
		      }
		   else
		       bar(316,361,519,399); //opb
	       }
	       }
	       outtextxy(470,140,"Enter Your");
	       outtextxy(470,155,"Answer Now");
	       dd_ans=getch();
	       dd_ans=toupper(dd_ans);
	       if(dd_ans==answer)
		{
		 RIGHT;
		 getch();
		 }
	       else
	       {
		  WRONG;
		  //FUNCTION
	       }
	    help++;
	  }
	  else
	  {
	    setcolor(YELLOW);
	    outtextxy(463,185,"Used");
	    outtextxy(463,200,"Try Again");
	    goto HELP;
	  }
	  break;
	 }

	 case '2':
	 {
	     if(h2==0)
	     {
	       h2=1;
	       setfillstyle(1,BLACK);
	       bar(463,140,532,215);
	       outtextxy(470,145,"Enter 1st");
	       outtextxy(475,160,"Answer");
	       dd_ans=getch();
	       dd_ans=toupper(dd_ans);
	       if(dd_ans==answer)
		 {
		 RIGHT;
		 }
	       else
	       {
		  bar(463,140,532,159);
		  outtextxy(470,145,"Enter 2nd");
		  dd_ans=getch();
		  dd_ans=toupper(dd_ans);
		  if(dd_ans==answer)
		      {
		      RIGHT;
		      }
		  else
		    {
		      WRONG;
		      //Function
		    }
	       }
	       help++;
	     }
	     else
	     {
	       setcolor(YELLOW);
	       outtextxy(463,185,"Used");
	       outtextxy(463,200,"Try Again");
	       goto HELP;
	     }
	     break;
	 }

	 case '3':
	 {
	     if(h3==0)
	     {
		h3=1;
		ans_s[0]=answer;
		ans_s[1]='\0';
		setfillstyle(1,BLACK);
		bar(463,140,533,183);
		setcolor(WHITE);
		settextstyle(2,0,4);
		outtextxy(465,142,"According to");
		outtextxy(465,155,"The Expert");
		outtextxy(465,170,"ANS:");
		outtextxy(495,170,ans_s);
		//printf("\nEnter your answer\n");
		dd_ans=getch();
		  dd_ans=toupper(dd_ans);
		  if(dd_ans==answer)
		      {
		      RIGHT;
		      }
		  else
		  {
		     WRONG;
		     //FUNCTION
		  }
		help++;
	     }
	     else
	     {
	       setcolor(YELLOW);
	       outtextxy(463,185,"Used");
	       outtextxy(463,200,"Try Again");
	       goto HELP;
	     }
	     break;
	 }
	 default:
	   goto HELP;
      }
      //printf("Choose Helpline\n1. 50-50\n2. DD\n3. EA\n");
   }
   else if(ansc==answer)
   {
     {
      RIGHT;
      }
      level++;
      getch();
      return ;
   }
   else if(ansc=='Q')
   {
	 setfillstyle(1,BLACK);
	 bar(72,10,450,230);
	 setcolor(BLUE);
	 settextstyle(3,0,7);
	 outtextxy(100,20," YOU");
	 outtextxy(180,70,"   QUIT");
	 setcolor(GREEN);
	 settextstyle(2,0,6);
	 outtextxy(10,100,"Right Ans");
	 outtextxy(40,115,aj);
      //m_w);
      //FUNCTION Screen
      getch();
      screen2(" Well Played",mw);
      closegraph();
      exit(0);
   }
   else
   {
     {
     WRONG;
     }
     getch();
     closegraph();
     exit(0);
   }
}

char sclock(int x,int y,int t)
{
    char ch,c[3],ans1,ans2;
    int g,flag=0,l;
    NO:
    while(!kbhit())
    {
       g=t/10;
       ch=(char)(g+48);
       c[0]=ch;
       g=t%10;
       ch=(char)(g+48);
       c[1]=ch;
       c[2]='\0';
       if(t==(-1))
       {
	   flag=1;
	   break;
       }
       else
       {
	   setfillstyle(1,BROWN);
	   bar(x,y,x+60,y+60);
	   settextstyle(2,0,12);
	   outtextxy(x+10,y+10,c);
	   delay(1000);
	   t--;
       }
    }
    if(flag==1)
       return 'F';
    else
    {
       settextstyle(2,0,4);
       outtextxy(x,y+60,"Enter final");
       outtextxy(x+15,y+70,"Answer");
       ans1=getch();
       ans1=toupper(ans1);
       setcolor(WHITE);
       settextstyle(0,0,1);
       outtextxy(230,462,"You Chose:");
       ajj1[0]=ans1;
       ajj1[1]='\0';
       outtextxy(320,462,ajj1);
       NOHELP:
       if((help!=3)&&(ans1=='H'))
	  return 'H';
       else if((help==3)&&(ans1=='H'))
       {
	  outtextxy(470,140,"No Helpline");
	  outtextxy(480,150,"Available");
       }

       while(!kbhit())
       {
	  g=t/10;
	  ch=(char)(g+48);
	  c[0]=ch;
	  g=t%10;
	  ch=(char)(g+48);
	  c[1]=ch;
	  c[2]='\0';
	  if(t==(-1))
	  {
	    flag=1;
	    break;
	  }
	  else
	  {
	     setfillstyle(1,BROWN);
	     bar(x,y,x+60,y+60);
	     settextstyle(2,0,12);
	     outtextxy(x+10,y+10,c);
	     delay(1000);
	     t--;
	  }
       }
       if(flag==1)
       {
	  ans1=toupper(ans1);
	  return ans1;

       }
       else
       {
	 ans2=getch();
	 ans2=toupper(ans2);

	 setfillstyle(1,BLACK);
	 bar(319,461,344,464);
	 ajj2[0]=ans2;
	 ajj2[1]='\0';
	 settextstyle(0,0,1);
	 outtextxy(320,462,ajj2);
	 if((help==3)&&(ans2=='H'))
	 {
	   goto NOHELP;
	 }
	 else
	 {
	   ans2 = toupper(ans2);
	   return ans2;
	 }
       }
    }
}
void screen()
{
int i,j=0;
cleardevice();
//Boundry
    while(!kbhit())
    {
    if((j%16)==0)
       j++;
    setfillstyle(HATCH_FILL,j);
    bar(0,0,5,475);
    bar(0,0,635,5);
    bar(632,0,637,475);
    bar(0,475,637,480);

    setcolor(YELLOW);
    setlinestyle(2,1,1);
    rectangle(100,110,560,250);


   settextstyle(TRIPLEX_FONT,HORIZ_DIR,8);
   setfillstyle(10,YELLOW);

   settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
     if(((j*2)%16)==0)
	j++;
     setcolor(j*2);

     outtextxy(130,130," CONGRATULATIONS ");
     setfillstyle(11,6);

     if(((j*3)%16)==0)
	j++;
     setcolor(j*3);

     settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
     outtextxy(170,190,"YOU WON 10 CRORE RUPEE");

     for(i=5;i<=150;i=i+5)
      {
	sound(10*i);
	delay(50);
	nosound();
      }
      j++;
   }
   getch();
   closegraph();
   exit(0);
}
void screen2(char dial[100],char money[100])
{
    int i,j=0;
    cleardevice();
    //Boundry
    while(!kbhit())
    {
    if((j%16)==0)
       j++;
    setfillstyle(HATCH_FILL,j);
    bar(0,0,5,475);
    bar(0,0,635,5);
    bar(632,0,637,475);
    bar(0,475,637,480);

    setcolor(YELLOW);
    setlinestyle(2,1,1);
    rectangle(80,100,580,270);


   settextstyle(TRIPLEX_FONT,HORIZ_DIR,8);
   setfillstyle(10,YELLOW);

   settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
     if(((j*2)%16)==0)
	j++;
     setcolor(j*2);

     outtextxy(140,125,dial);
     setfillstyle(11,6);

     if(((j*3)%16)==0)
	j++;
     setcolor(j*3);

     settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
     outtextxy(170,200,"YOU WON:");
     outtextxy(290,200,money);

     for(i=150;i>=5;i=i-5)
      {
	sound(10*i);
	delay(50);
	nosound();
      }
      j++;
   }
   getch();
   closegraph();
   exit(0);
}

void scr1()
{
  int i;
  for(i=0;i<100;i++)
 {
 setfillstyle(HATCH_FILL,13);

 bar(50,150,550,250);
 setfillstyle(SOLID_FILL,15);
 bar(70,170,530,230);
 settextstyle(0,0,6);
 setcolor(0);
 outtextxy(70,180," CHAMPION ");
 setcolor(15);
 circle(100,200,5+i);
 circle(200,300,85-i);
 circle(500,400,5+i);
 circle(200,300,85-i);
 circle(50,300,5+i);
 circle(400,100,85-i);
 circle(250,150,5+i);
 circle(400,200,85-i);
 circle(400,300,5+i);
 circle(150,300,85-i);
 circle(200,100,5+i);
 circle(130,100,85-i);
 circle(250,250,5+i);
 circle(200,400,85-i);
 circle(150,400,5+i);
 circle(500,300,85-i);
 circle(500,100,5+i);
 circle(400,250,85-i);
 circle(500,400,5+i);
 circle(300,170,85-i);
 circle(250,400,5+i);
 circle(200,400,85-i);
 circle(400,400,5+i);
 circle(550,200,85-i);
 circle(560,300,5+i);
 circle(350,200,85-i);
 circle(350,400,5+i);
 circle(350,50,85-i);
 circle(350,300,5+i);
 delay(5);
 cleardevice();
 }
 return;

}
