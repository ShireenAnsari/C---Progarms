#include<iostream>
using namespace std;
int main()
{
	int i,j;
	int arr[6]={1,2,3,4,3,5};
	printf("Duplicate elements in array are\n");
	for(int i = 0; i <6; i++) 
	{    
        for(int j = i + 1; j < 6; j++) 
		{    
            if(arr[i] == arr[j])    
                printf("%d\n", arr[j]);    
        }    
    }    
    return 0;    
}  

