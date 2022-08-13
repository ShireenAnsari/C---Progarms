#include<stdio.h>
#include<conio.h>
void traversal(int arr[],int siz)
{
	int i,temp,j;
	for(i=0;i<siz;i++)
	{
		for(j=0;j<siz;j++)
		{
		
		if(arr[i]<arr[j])
		{
		  temp=arr[i];
		  arr[i]=arr[j];
		  arr[j]=temp;	
		}}
	}
	for(i=0;i<siz-1;i++)
	{
		printf("%d\n",arr[i]);
	}
}
//void deletionarr(int arr[],int size,int index)
//{
//	int i;
//	for(i=index;i<size-1;i++)
//	{
//		arr[i]=arr[i+1];
//}
void deletionarr(int val,int arr[],int size)
{
	int i,j;
	for(i=0;i<size;i++)
	{
	if(arr[i]==val)
	{
		for(j=i+1;j<=size;j++)
		{
			arr[j-1]=arr[j];
		}
	}
}}
int main()
{
	int arr[100]={7,8,27,6,88};
	int size=5,index=3;
	int val=6;
	printf("Before Deletion\n");
	traversal(arr,size);
	printf("After deletion\n");
	deletionarr(val,arr,size);
	size-=1;
	traversal(arr,size);	
}
	

