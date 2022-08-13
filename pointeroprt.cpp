#include<stdio.h>
#include<conio.h>
int main()
{
	int a=34;
	int* ptra=&a;
	char b='1';
	char* ptra2=&b;
//	printf("%d",ptra);
//	printf("\n%d",*ptra);
//	printf("\n%x",ptra+1);
//	printf("\n%d",ptra+2);  //adds one means 4bits size of int
//	printf("\n%d",ptra2);
//	printf("\n%d",ptra2-2);  //adds two bytes bcz character takes 1byte memory allocation
	printf("%d",*ptra+2);
}
