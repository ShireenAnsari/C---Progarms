#include<stdio.h>
void printarray(int* array,int size)
{
	int i;
	for(i=0;i<size;i++)
	{
	printf("%d\t",array[i]);}
	printf("\n");
}
void bubble(int* A,int size)
{
	int i,j,temp;
	for(i=0;i<size-1;i++)  //for number of passess n-1 pass
	{
		for(j=0;j<size-1-1;j++) //for number of passess in each pass
		{
			if(A[j]<A[j+1])
			{
			temp=A[j];
			A[j]=A[j+1];
			A[j+1]=temp;	
			}
		}
		
		
	}
}
int main()
{
	int arr[]={2,1,6,12,0};
int	size=5;
	printf("Array Before sorting\n");
	printarray(arr,size);
	printf("Array After swapping\n");
	bubble(arr,size);
	printarray(arr,size);
}
