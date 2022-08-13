#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,temp;;
	int arr[5]={34,5,6,7,8};
	for(i=0;i<5;i++)
	    {
	    	for(j=i+1;j<5;j++)
	    	{
			
	    	  temp=arr[i];
	    	  arr[i]=arr[j];
	    	  arr[j]=temp;}
	}
	 for(i=0;i<5;i++)
	 { 
	    printf("%d\t",arr[i]);
	 }
	
}
