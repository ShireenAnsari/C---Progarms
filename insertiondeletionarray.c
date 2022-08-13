#include<stdio.h>
#include<conio.h>
void traversal(int arr[],int siz)
{
	int i;
	for(i=0;i<siz;i++)
	{
		printf("%d\n",arr[i]);
	}
}
int indinsertion(int arr[],int size,int element,int capacity,int index)
{
	int i;
	if(size>=capacity)
	{
		return -1;
	}
	for(i=size-1;i>=index;i--)
	{
		arr[i+1]=arr[i];
	}
	arr[index]=element;
	return 1;	   
	
}
int main()
{
	int arr[100]={7,8,12,27,88};
	int size=5,index=3;
	traversal(arr,size);
	int element=45;
	indinsertion(arr,size,element,100,index);
	size+=1;
	traversal(arr,size);
	
	
	
}
