#include<stdio.h>
#include<conio.h>
int main()
{
	printf("Let's learn about pointers\n");
	int a=76;
	printf("The value of a is %d\n",a);
	int *ptr=&a;
	int *ptr2=&ptr;
	printf("The value of a is %d\n", *ptr);  //%x  prints the address in hexadecimal %p can also be used  ptr prints the address of ptr 
	printf("The address of pointer to a is %p\n", &ptr);
	printf("The address of a is %x\n",&a); //used to print address of a 
	printf("The address of a is %x\n",ptr);  //used to print address of a
	printf("The address of ptr to a  is %p ",ptr2);
	
	
	
	
	return 0;
}
