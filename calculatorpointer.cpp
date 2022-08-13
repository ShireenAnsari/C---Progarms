#include<stdio.h>
int *sum(int* a,int* b);
//int min(int,int);
//float divid(int*,int*);
int main()
{
	int a,b;
	//	float z;
	char op;
	printf("Enter num1");
	scanf("%d",&a);
	printf("Enter num2");
	scanf("%d",&b);
	printf("Enter operator:");
	scanf("%c",&op);
	if(op=='+')
	{
		printf("The addition of a and b is %d",sum(&a,&b));
	}
//		if(op=='-')
//	{
//		
//	    y=min(a,b);
//		printf("The addition of a and b is %d",y);
//	}
//		if(op=='-')
//	{
//	    z=divid(a,b);
//		printf("The division of a and b is %f",z);
//	}
}
int* sum(int* a,int* b)
{
	int sum=a+b;	
	return sum;
}
