#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,max=0;
	int arr[5]={44,36,34,45,4}; 
	for(i=0; i<5; i++)
    {
        for(j=i+1; j<5; j++)
        {
            //If there is a smaller element found on right of the array then swap it
            if(arr[j] > arr[i])
            {
            max = arr[i];
            arr[i] = arr[j];
            arr[j] = max;  }
        }
    }
    
    printf("Elements of array in sorted ascending order:");
    for(i=0; i<5; i++)
    {
        printf("%d\t",arr[i]);
    }
	
	
}
