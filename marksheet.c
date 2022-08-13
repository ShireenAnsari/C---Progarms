#include<stdio.h>
#include<windows.h>
#include<time.h>
gotoxy(int x,int y)
{
	COORD c;
	c.X=x+56;
	c.Y=y+3;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
gotoxy2(int x,int y)
{
	COORD c;
	c.X=x+56;
	c.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
int color(int i)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),i);
}
void whitepage()
{
	int i,j;
	
	for(i=10;i<=100;i++)
	{
		for(j=1;j<=61;j++)
		{
			gotoxy2(i,j);
			color(254);
			printf(" ");
		}
	}
	gotoxy(11,59);
	color(240);
}
int main()
{
	time_t currentTime;
    time(&currentTime);
    system("color 0f");
    fflush(stdin);
    ///loop declaration
    int i,j;
    ////////////////////////////////////////////////////////////////////
    getch();
    whitepage();
	for(i=14;i<=42;i++)
    {
    	gotoxy(45,i);
    	printf("%c",-77);
	}
	for(i=14;i<=42;i++)
    {
    	gotoxy(55,i);
    	printf("%c",-77);
	}
	for(i=14;i<=42;i++)
    {
    	gotoxy(65,i);
    	printf("%c",-77);
	}
	for(i=14;i<=42;i++)
    {
    	gotoxy(76,i);
    	printf("%c",-77);
	}
	for(i=14;i<=85;i++)
    {
    	gotoxy(i,42);
    	printf("%c",-60);
	}
	//LINESSSSSSSSSSSSSSSSSSSSSSSSSSSS
	for(i=17;i<=41;i++)
    {
    	gotoxy(14,i);
    	printf("%c",-77);
	}
		for(i=17;i<=41;i++)
    {
    	gotoxy(86,i);
    	printf("%c",-77);
	}
	for(i=14;i<=85;i++)
    {
    	gotoxy(i,2);
    	printf("%c",-51);
	}
	for(i=14;i<=85;i++)
    {
    	gotoxy(i,16);
    	printf("%c",-60);
	}
	for(i=14;i<=85;i++)
    {
    	gotoxy(i,13);
    	printf("%c",-60);
	}
	for(i=45;i<=76;i++)
    {
    	gotoxy(i,39);
    	printf("%c",-60);
	}
	gotoxy(45,39);
	printf("%c",-61);
	gotoxy(55,39);
	printf("%c",-59);
	gotoxy(65,39);
	printf("%c",-59);
	gotoxy(76,39);
	printf("%c",-76);
	gotoxy(14,12+1);
	printf("%c",-38);
	gotoxy(14,14+1);
	printf("%c",-77);
	gotoxy(86,12+1);
	printf("%c",-65);
	gotoxy(86,14+1);
	printf("%c",-77);
	gotoxy(14,13+1);
	printf("%c",-77);
	gotoxy(86,13+1);
	printf("%c",-77);
	gotoxy(14,15+1);
	printf("%c",-61);
	gotoxy(86,15+1);
	printf("%c",-76);
	gotoxy(14,41+1);
	printf("%c",-64);
	gotoxy(86,41+1);
	printf("%c",-39);
	gotoxy(45,12+1);
	printf("%c",-62);
	gotoxy(55,12+1);
	printf("%c",-62);
	gotoxy(65,12+1);
	printf("%c",-62);
	gotoxy(76,12+1);
	printf("%c",-62);
	gotoxy(45,15+1);
	printf("%c",-59);
	gotoxy(55,15+1);
	printf("%c",-59);
	gotoxy(65,15+1);
	printf("%c",-59);
	gotoxy(76,15+1);
	printf("%c",-59);
	gotoxy(45,41+1);
	printf("%c",-63);
	gotoxy(55,41+1);
	printf("%c",-63);
	gotoxy(65,41+1);
	printf("%c",-63);
	gotoxy(76,41+1);
	printf("%c",-63);
	////////////PRINTING
    gotoxy(22,0);
	printf("BOARD OF INTERMEDIATE & SECONDARY EDUCATION HYDERABAD SINDH\n");
	gotoxy(47,3);
    printf("MARKS CERTIFICATE      GROUP: ");
    gotoxy(70,4);
    printf("SEAT NO:");
    gotoxy(14,6);
    printf("SECONDARY SCHOOL CERTIFCATE PART I & II ANNUAL EXAMINATION ");
    gotoxy(32,7);
    printf("Held in the Month of \n");
    gotoxy(14,8);
    printf("NAME:\n");
	gotoxy(14,9);              
    printf("FATHER'NAME:\n");  
	gotoxy(14,10);         
    printf("SURANAME:\n" );
	gotoxy(14,11);             
    printf("INSTITUTE:\n"    );          
	gotoxy(14,12);
	printf("DISTRICT:\n");
	gotoxy(27,13+1);
	printf("SUBJECT");
	gotoxy(47,13+1);
	printf("MAXIMUM");
	gotoxy(57,13+1);
	printf("MINIMUM");
	gotoxy(67,13+1);
	printf("OBTAINED");
	gotoxy(48,14+1);
	printf("MARKS");
	gotoxy(58,14+1);
	printf("MARKS");
	gotoxy(68,14+1);
	printf("MARKS");
	gotoxy(78,14+1);
	printf("REMARKS");
	gotoxy(16,16+1);
	printf("SINDHI");
	gotoxy(16,17+1);
	printf("URDU SALIS");
	gotoxy(16,18+1);
	printf("ENGLISH-I");
	gotoxy(16,19+1);
	printf("ENGLISH-II");
	gotoxy(16,20+1);
	printf("ISLAMIAT");
	gotoxy(16,21+1);
	printf("PAKISTAN STUDIES");
	gotoxy(16,22+1);
	printf("PHYSICS THEORY");
	gotoxy(16,23+1);
	printf("PHYSICS PRACTICAL");
	gotoxy(16,24+1);
	printf("CHEMISTRY THEORY");
	gotoxy(16,25+1);
	printf("CHEMISTRY PRACTICAL");
	gotoxy(16,26+1);
	printf("ELECTILE MATHEMATICS");
	gotoxy(16,27+1);
	printf("BIOLOGY THEORY");
	gotoxy(16,28+1);
	printf("BIOLOGY PRACTICAL");
	gotoxy(40,41);
	printf("TOTAL");
	gotoxy(14,44+1);
	printf("RESULT:");
	gotoxy(14,45+1);
	printf("PERCENTAGE:");
	gotoxy(14,47+1);
	printf("GRADE:");
	gotoxy(14,49+1);
    printf("DATE OF BIRTH:");
    gotoxy(14,52+1);
    printf("DATE OF ISSUE:");
    gotoxy(14,53+1);
	printf("%s",ctime(&currentTime));
    gotoxy(14,54+1);
    printf("                                                                  ___________________");
    gotoxy(14,55+1);
    printf("Certificate #          PREPARED BY:    READ BY    CHECKED BY      CONTROLLER OF BOARD");
    gotoxy(50,17);
    printf("75");
    gotoxy(50,18);
    printf("75");
    gotoxy(50,19);
    printf("75");
    gotoxy(50,20);
    printf("75");
    gotoxy(50,21);
    printf("75");
    gotoxy(50,22);
    printf("75");
    gotoxy(50,23);
    printf("85");
    gotoxy(50,24);
    printf("15");
    gotoxy(50,25);
    printf("85");
    gotoxy(50,26);
    printf("15");
    gotoxy(49,27);
    printf("100");
    gotoxy(50,28);
    printf("85");
    gotoxy(50,29);
    printf("15");
    ///x/x/x/x/x/x/x/x/x/x/x/x/x/x/x/x
    gotoxy(60,17);
    printf("25");
    gotoxy(60,18);
    printf("25");
    gotoxy(60,19);
    printf("25");
    gotoxy(60,20);
    printf("25");
    gotoxy(60,21);
    printf("25");
    gotoxy(60,22);
    printf("25");
    gotoxy(60,23);
    printf("28");
    gotoxy(60,24);
    printf("05");
    gotoxy(60,25);
    printf("28");
    gotoxy(60,26);
    printf("05");
    gotoxy(60,27);
    printf("33");
    gotoxy(60,28);
    printf("28");
    gotoxy(60,29);
    printf("05");
    gotoxy(49,41);
    printf("815");
    ////DATA declaraction
    int sn,yr,s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11,s12,s13,t,cn,o;
    float p;
    char name[10],fname[10],sname[10],inst[10],dist[10],grp[10],mnt[10],dob[10];
	///////////////////////////////Scaning and printing 
	color(240);
	gotoxy(77,3);
	gets(grp);
	gotoxy(77,3);
	printf("%s",grp);
	gotoxy(53,7);
	gets(mnt);
	gotoxy(53,7);
	printf("%s",mnt);
	gotoxy(20,8);
	gets(name);
	gotoxy(20,8);
	printf("%s",name);
	gotoxy(27,9);
	gets(fname);
	gotoxy(27,9);
	printf("%s",fname);
	gotoxy(24,10);
	gets(sname);
	gotoxy(24,10);
	printf("%s",sname);
	gotoxy(25,11);
	gets(inst);
	gotoxy(25,11);
	printf("%s",inst);
	gotoxy(24,12);
	gets(dist);
	gotoxy(24,12);
	printf("%s",dist);
	gotoxy(29,49+1);
	gets(dob);
	gotoxy(29,49+1);
	printf("%s",dob);
	/////////////integer,float
	gotoxy(79,4);
	scanf("%d",&sn);
	gotoxy(79,4);
	printf("%d",sn);
	gotoxy(73,6);
	scanf("%d",&yr);
	gotoxy(73,6);
	printf("%d",yr);
	//////////////subs marks
	gotoxy(70,17); scanf("%d",&s1); gotoxy(70,17); printf("%d",s1);
	gotoxy(70,18); scanf("%d",&s2); gotoxy(70,18); printf("%d",s2);
	gotoxy(70,19); scanf("%d",&s3); gotoxy(70,19); printf("%d",s3);
	gotoxy(70,20); scanf("%d",&s4); gotoxy(70,20); printf("%d",s4);
	gotoxy(70,21); scanf("%d",&s5); gotoxy(70,21); printf("%d",s5);
	gotoxy(70,22); scanf("%d",&s6); gotoxy(70,22); printf("%d",s6);
	gotoxy(70,23); scanf("%d",&s7); gotoxy(70,23); printf("%d",s7);
	gotoxy(70,24); scanf("%d",&s8); gotoxy(70,24); printf("%d",s8);
	gotoxy(70,25); scanf("%d",&s9); gotoxy(70,25); printf("%d",s9);
	gotoxy(70,26); scanf("%d",&s10); gotoxy(70,26); printf("%d",s10);
	gotoxy(70,27); scanf("%d",&s11); gotoxy(70,27); printf("%d",s11);
	gotoxy(70,28); scanf("%d",&s12); gotoxy(70,28); printf("%d",s12);
	gotoxy(70,29); scanf("%d",&s13); gotoxy(70,29); printf("%d",s13);
	gotoxy(14,57);
	scanf("%d",&cn);
	gotoxy(14,57);
	printf("%d",cn);
	t=s1+s2+s3+s4+s5+s6+s7+s8+s9+s10+s11+s12+s13;
	p=t*100/850;
	gotoxy(69,41);
	printf("%d",t);
	gotoxy(27,46);
	printf("%.2f%%",p);
	if(p<=100 && p>=0)
	{
		if(p>=40)
		{
     		gotoxy(22,45);
			printf("PASS");
			gotoxy(21,48);
        	if(p>=40&&p<50)
         	printf("D\n");
            else if(p>=50&&p<60)
        	printf("C\n");
        	else if(p>=60&&p<70)
         	printf("B\n");
         	else if(p>=70&&p<80)
        	printf("A\n");
        	else if(p>=80&&p<101)
        	printf("A1\n");
		}
	else 
	{
		gotoxy(22,45);
		printf("FAIL");
		gotoxy(21,48);
    	printf("Less Than D.");
	}
	}
	else 
	{
		gotoxy(22,45);
		printf("Something Went Wrong");
		gotoxy(21,48);
		printf("Something Went Wrong");
	}
	//////////////////photo
	gotoxy(74,7);
	color(128);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c\n",-55,-51,-51,-51,-51,-51,-51,-51,-51,-51,-51,-69);
	gotoxy(74,8);
	printf("%c //////// %c\n",-70,-70);
	gotoxy(74,9);
	printf("%c  (O O)   %c\n",-70,-70);
	gotoxy(74,10);
	printf("%c    |     %c\n",-70,-70);
	gotoxy(74,11);
	printf("%c  %c%c%c%c%c   %c\n",-70,-64,-60,-60,-60,-39,-70);
	gotoxy(74,12);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c\n",-56,-51,-51,-51,-51,-51,-51,-51,-51,-51,-51,-68);
	gotoxy(75,9);
	color(256);
	printf(" ");
	gotoxy(84,9);
	color(256);
	printf(" ");
    getch();
}
