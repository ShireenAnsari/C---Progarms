#include<stdio.h>
#include<conio.h>
int main()
{
	int var1=22,var2=33;
	int *ptr=&var1;
//	ptr=&var1;
	printf("The value of var1 is %d",*ptr);
int	*ptr2=&var2;
	printf("The value of var1 is %d",*ptr2);
}
