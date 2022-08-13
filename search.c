#include<stdio.h>
#include<conio.h>
int main()
{
	int item,i,loc=0;
	int arr[5]={2,3,4,5,17};
	item=17;
	for(i=0;i<5;i++)
	{
		if(arr[i]==item)
		   loc=i;
		   
	}
	if(loc==0)
	  printf("Item is not Present");
	else
	  printf("%d  is the location of item",loc);
	  
	  
	
}
