#include<iostream>
#include<conio.h>
using namespace std;
bool comp(int arr[],int size)
{
	int i,j;
	for(i=0;i<size;i++)
	 {
	 	for(j=i+1;j<size;j++)
	 	{
	 		if(arr[i]==arr[j])
	 		 
	 		 	return true;
		}
		 }
		return false;
	 }
int main()
{
	int arr[]={1,2,3,4,7,8};
	int size=6;
//	bool b=comp(arr,size);
	cout<<"The value returned is "<<comp(arr,size);
}
