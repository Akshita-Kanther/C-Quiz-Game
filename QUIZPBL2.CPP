#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void bollywood();
void gk();
void computers();
void mathematics();
void main_menu();
void instructions()
{
  printf("\n\t\t\t\tINSTRUCTIONS:");
  printf("\n\n\t\t This quiz contains 4 sections-G.K.,BOLLYWOOD,COMPUTERS,MATHEMATICS.\nYou can select the section as per your preference.All the sections contain 5 questions each having four options.\nCorrect answer will award one point.\nThere will be no negative marking.\nTotal score will be displayed in the end.");
  clrscr();
}
void main_menu()
{
 int i;
 printf("\n\n\t\t\t\t1.BOLLYWOOD");
 printf("\n\t\t\t\t2.G.K.");
 printf("\n\t\t\t\t3.COMPUTERS");
 printf("\n\t\t\t\t4.MATHEMATICS");
 printf("\n\t\t\t\t5.EXIT");
 printf("\n ENTER YOUR CHOICE:");
 scanf("%d",&i);
 switch(i)
 {
  case 1: clrscr();
	  bollywood();
	  break;
  case 2:
	 clrscr();
		 gk();
	     break;
  case 3:
	 clrscr();
		 computers();
	     break;
  case 4:
	 clrscr();
	     mathematics();
	     break;
   case 5:
	 exit(0);
    default:
	printf("\n\nWRONG CHOICE");
	exit(0);
   }
}
void bollywood()
{
 int a,b,g,e,f,k=0,z;
 printf("\nQ1.Who said the dialogue'thapad se dar nahi lagta sahab, pyar se lagta hai'?\n1.Sonakshi sinha\n2.Priyanka chopra\n3.Kareena kapoor\n4.Katrina kaif");
 printf("\nENTER YOUR ANSWER:");
 scanf("%d",&a);
 if(a==1)
 { printf("\n CORRECT ANSWER");
 k++;
 }
 else
{ printf("\n WRONG ANSWER");}
 printf("\n\nQ2.Who was hero in the movie 'BLACKMAIL'?\n1.Salman khan\n2.Irrfan khan\n3.Varun dhawan\n4.Shahid kapoor");
 printf("\nENTER YOUR ANSWER:");
 scanf("%d",&b);
 if(b==2)
 { printf("\n CORRECT ANSWER");
 k++;
 }
 else
 {printf("\n WRONG ANSWER");}
 getch();
 clrscr();
 printf("\nQ3.Who was the hero in the movie'BHAAG MILKHA BHAAG'?\n1.Farhan Akhtar\n2.Shahrukh Khan\n3.Salman Khan\n4.Ranveer Singh");
 printf("\n ENTER YOUR ANSWER:");
 scanf("%d",&g);
 if(g==1)
 { printf("\n CORRECT ANSWER");
 k++;
 }
 else
 {printf("\n WRONG ANSWER");}
 printf("\nQ4.Who was 'Naina Mathur'in Hichki movie?\n1.Rani Mukherji\n2.Parineeti Chopra\n3.Kareena Kapoor\n4.Kriti Sanon");
 printf("\nENTER YOUR ANSWER:");
 scanf("%d",&e);
 if(e==1)
 { printf("\n CORRECT ANSWER");
 k++;
 }
 else
 {printf("\n WRONG ANSWER");}
 getch();
 clrscr();
 printf("\nQ5.How many songs are in the 'GOLD' movie?\n1.2songs\n2.5songs\n3.6songs\n4.8songs");
 printf("\nENTER YOUR ANSWER:");
 scanf("%d",&f);
 if(f==4)
 { printf("\n CORRECT ANSWER");
 k++;
 }
 else
 {printf("\n WRONG ANSWER");}
 clrscr();
 printf("\n\n\n\n\t YOUR SCORE IS:%d",k);
 printf("\n\n\t press (1) to go main menu & any other key to exit:");
 scanf("%d",&z);
 if(z==1)
 main_menu();
 else
 exit(0);
  }
void gk()
{
	 int a,b,c,e,f,k=0,z;
	 printf("\nQ1.The first metal used by the man was?\n1.iron\n2.copper\n3.aluminium\n4.gold");
	 printf("\nENTER YOUR ANSWER:");
	 scanf("%d",&a);
	 if(a==1)
	 {
	 printf("\n CORRECT ANSWER");
	 k++;
	 }
	 else
	 printf("\n WRONG ANSWER");
	 printf("\n\nQ2.Panjab is famous for?\n1.nylon textile\n2.silk textile\n3.woolen textile\n4.cottan textile");
	 printf("\nENTER YOUR ANSWER:");
	 scanf("%d",&b);
	 if(b==2)
	 {
	  printf("\n CORRECT ANSWER");
	  k++;
	 }
	 else
	 printf("\n WRONG ANSWER");
	 getch();
	 clrscr();
	 printf("\n\nQ3.Gobar gas contain mainly?\n1.carbon dioxide\n2.methane\n3.ethylene\n4.carbon monoxide");
	 printf("\nENTER YOUR ANSWER:");
	 scanf("%d",&c);
	 if(c==3)
	{
	 printf("\n CORRECT ANSWER");
	 k++;
	}
	else
	printf("\n WRONG ANSWER");
	printf("\n\nQ4.The hottest planet in the solar system?\n1.earth\n2.venus\n3.mars\n4.jupiter");
	printf("\nENTER YOUR ANSWER:");
	scanf("%d",&f);
	if(f==4)
	{
	printf("\n CORRECT ANSWER");
	k++;
	}
	else
	 printf("\n WRONG ANSWER");
	 getch();
	 clrscr();
	 printf("\nQ5.One people,one state,one leader was the policy of?\n1.stalin\n2.levin\n3.hitler\n4.mussolin");
	 printf("\nENTER YOUR ANSWER:");
	 scanf("%d",&e);
	 if(e==5)
	 {
	  printf("\n CORRECT ANSWER");
	  k++;
	 }
	 else
	 printf("\n WRONG ANSWER");
	 getch();
	 clrscr();
	 printf("\n\n YOUR SCORE IS:%d",k);
	 printf("\n\n\t press(1) to go to main menu or press any other key to exit:");
	 scanf("%d",&z);
	if(z==1)
	main_menu();
	else
	exit(0);
}

void computers()
{  int a,b,c,e,f,k=0,z;
	printf("\nQ1.World's first microprocessor is?\n1. Alpha 21064\n2. Intel 8008\n3. Intel 4004\n4. CVAX");
	printf("\nENTER YOUR ANSWER:");
	scanf("%d",&a);
	if(a==3)
	{
	  printf("\n CORRECT ANSWER");
	  k++;
	}
	else
	printf("\n WRONG ANSWER");
	printf("\n\nQ2.Which one is the first fully supported 64-bit operating system?\n1. Windows Vista\n2. Mac\n3.  Linux\n4. Windows XP");
	printf("\nENTER YOUR ANSWER:");
	scanf("%d",&b);
	if(b==3)
	{
	   printf("\n CORRECT ANSWER");
	   k++;
	}
	else
	printf("\n WRONG ANSWER");
	getch();
	clrscr();
	printf("\n\nQ3.Computer Hard Disk was first introduced in 1956 by.........\n1. Dell\n2. Apple\n3. Microsoft\n4. IBM");
	 printf("\nENTER YOUR ANSWER:");
	scanf("%d",&c);
	if(c==3)
	{
		printf("\n CORRECT ANSWER");
		k++;
	}
	else
	printf("\n WRONG ANSWER");
	printf("\n\nQ4.Which computer program converts assembly language to machine language?\n1. Interpreter\n2. Compiler\n3. Assembler\n4. Comparator");
	 printf("\nENTER YOUR ANSWER:");
	scanf("%d",&f);
	if(f==3)
	{
		printf("\n CORRECT ANSWER");
		k++;
	}
	else
	printf("\n WRONG ANSWER");
	getch();
	clrscr();
	printf("\n\nQ5.find out the odd one: \n1. Internet\n2. Linux\n3. Unix\n4. Windows");
	 printf("\ENTER YOUR ANSWER:");
	scanf("%d",&e);
	if(e==1)
	{
		printf("\n CORRECT ANSWER");
		k++;
	}
	else
	printf("\n WRONG ANSWER");
	printf("\n\n YOUR ANSWER IS:%d",k);
	getch();
	clrscr();
	printf("\n\n\n\n\t\t\t YOUR SCORE IS:%d",k);
	printf("\n\n\t press (1) to go main menu & any other key to exit:");
	scanf("%d",&z);
	if(z==1)
	main_menu();
	else
	exit(0);
}
void mathematics()
{
	int a,b,c,e,f,k=0,z;
	printf("\nQ1.Which of these square numbers also happens to be the sum of two smaller square numbers?\n1. 16\n2. 36\n3. 25\n4. 49");
	printf("\nENTER YOUR ANSWER:");
	scanf("%d",&a);
	if(a==3)
	{
	  printf("\n CORRECT ANSWER");
	  k++;
	}
	else
	printf("\n WRONG ANSWER");
	printf("\n\nQ2.When multiplied by itself,which number is equal to 12,345,678,987,654,321?\n1. 1,111,111\n2. 111,111,111\n3.  11,111,111,111\n4. 111,111,111,111 ");
	printf("\nENTER YOUR ANSWER:");
	scanf("%d",&b);
	if(b==2)
	{
	   printf("\n CORRECT ANSWER");
	   k++;
	}
	else
	printf("\n WRONG ANSWER");
	getch();
	clrscr();
	printf("\nQ3.The number of 3-digit numbers divisible by 6,is..........\n1. 149\n2. 166\n3. 150\n4. 151");
	printf("\ENTER YOUR ANSWER:");
	scanf("%d",&c);
	if(c==3 )
	{
		printf("\n CORRECT ANSWER");
		k++;
	}
	else
	printf("\n WRONG ANSWER");
	printf("\n\nQ4.A clock strikes once at 1 o'clock, twice at 2 o'clock, trice at 3 o'clock and so on. How many times, it will strike in 24 hours ?\n1. 78\n2. 136\n3. 156\n4. 196 ");
	printf("\ENTER YOUR ANSWER:");
	scanf("%d",&f);
	if(f==3)
	{
		printf("\n CORRECT ANSWER");
		k++;
	}
	else
	printf("\n WRONG ANSWER");
	getch();
	clrscr();
	printf("\nQ5.Which of the following number gives 240 when added to its own square?\n1. 15\n2. 16\n3. 18\n4. 20");
	printf("\nENTER YOUR ANSWER:");
	scanf("%d",&e);
	if(e==1)
	{
		printf("\n CORRECT ANSWER");
		k++;
	}
	else
	printf("\n WRONG ANSWER");
	clrscr();
	printf("\n\n YOUR SCORE IS:%d",k);
	printf("\n\npress(1) to go to main menu or press any other key to exit:");
	scanf("%d",&z);
	if(z==1)
	main_menu();
	else
	exit(0);
}

void main()
{
  int m;
  clrscr();
  printf("\n\n\n\t\tMODY UNIVERSITY OF SCIENCE AND TECHNOLOGY");
  printf("\n\t\t     SCHOOL OF ENGINEERING AND TECHNOLOGY");
  printf("\n\n\n\n\t\t\tPROJECT BASED LEARNING");
  printf("\n\n\n\t\t\t\tQUIZ");
  printf("\n\t\t\t\t-----");
  printf("\n\n\n\nSUBMITTED TO -DR ANAND SHARMA\t\t\tSUBMITTED BY-NIDHI CHOUDHARY\n\t\t\t\t\t\t\t     AKSHITA KANTHER\n\t\t\t\t\t\t\t\     HIRAL JAIN\n\t\t\t\t\t\t\t     YUKTI GOYAL\n\t\t\t\t\t\t\t     SIMRAN JAIN");
  printf("\n\t\t\tpress (1) to continue:");
  scanf("%d",&m);
  if(m==1)
  clrscr();
  else
  exit(0);
 instructions();
 main_menu();
 getch();
}
