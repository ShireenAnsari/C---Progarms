#include<stdio.h>
#include<conio.h>
int main()
{
	float* ptr;
	ptr=(float*)malloc(4);  //typecasting malloc to float as it was returning void address by default
	*ptr=3.4;
	printf("%d",ptr);
	
}
