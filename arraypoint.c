#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[]={1,2,3,4,5};
	printf("%d\n",arr[0]);
	printf("%d",arr);  //address of first element
	printf("\n%d",&arr[0]);   //arr or &arr[0] both are same things
	printf("\n%d",&arr[1]); 
	printf("\n%d",arr+1); 
	

	printf("\nValue of addressess %d\n",*(&arr[0]));   //arr or &arr[0] both are same things
	printf("Value of address %d\n",*(&arr[1])); 
	printf("Value of address %d",*(arr+1)); 
	
	
}
