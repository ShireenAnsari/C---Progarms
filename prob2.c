#include<stdio.h>
#include<conio.h>
void div(int,int);
int main()
{
int a,b;
printf("Enter the value of a and b");
scanf("%d %d",&a,&b);
div(a,b);
getch();	
}
void div(int c,int d)
{
	if(c%d==0)
	printf("div(j,k)=%d",1);
	else
	  printf("div(j,k)=%d",0);
}
