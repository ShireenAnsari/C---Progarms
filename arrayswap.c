#include<stdio.h>
#include<conio.h>
int main ()
{
	int i,temp;
	temp=0;
	int arr1[]={3,4,5};
	int arr2[]={5,6,7};
		printf("Two arrays before swapping becomes\n");
	for(i=0;i<3;i++)
	{
		printf("%d\t",arr1[i]);
	}
	printf("\n");
	for(i=0;i<3;i++)
	{
		printf("%d\t",arr2[i]);
	}
	for(i=0;i<3;i++)
	{
		temp=arr1[i];
		arr1[i]=arr2[i];
		arr2[i]=temp;	
	}
	printf("\nTwo arrays after swapping becomes\n");
	for(i=0;i<3;i++)
	{
		printf("%d\t",arr1[i]);
	}
	printf("\n");
	for(i=0;i<3;i++)
	{
		printf("%d\t",arr2[i]);
	}
	
}
