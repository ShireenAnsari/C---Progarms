#include<stdio.h>
float *sum(float*,float* );
float *sub(int* ,int*);
float *div(float*,float*);
float *mul(float*,float*);
int main()
{
	float a,b;
	char op;
		printf("Enter operator:");
	scanf("%c",&op);
	printf("Enter num1");
	scanf("%f",&a);
	printf("Enter num2");
	scanf("%f",&b);
	if(op=='+')
	{
		printf("The addition of a and b is %.1f",sum(&a,&b));
	}
	else if(op=='-')
	{
		printf("The subtraction of a and b is %.1f",sub(&a,&b));
	}
	else if(op=='/')
	{
		printf("The division of a and b is %.1f",div(&a,&b));
	}
	else if(op=='*')
	{
		printf("The Multiplication of a and b is %f",mul(&a,&b));
	}
	else
	  printf("Invalid input");
}
float* sum(float* a,float* b)
{
float s;
s=*a+*b;
return s;
}
//float* sub(float* a,float* b)
//{
//float s;
//s=*a-*b;
//return s;
//}
//float* div(float* a,float* b)
//{
//float s;
//s=*a / *b;
//return s;
//}
//float* mul(float* a,float* b)
//{
//float s;
//s=a**b*;
//return s;
//}

