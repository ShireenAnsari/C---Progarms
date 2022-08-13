#include<stdio.h>
#include<conio.h>
int main()
{
   int a,b;
	printf("Enter value for num1,num2");
	scanf("%d %d",&a,&b);
	printf("Addition is %d",a+b);
	printf("The division of %d and %d is %.2f",a,b,(float)a/(float)b);
	getch();
	
}
