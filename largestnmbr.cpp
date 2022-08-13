#include<iostream>
using namespace std;
int main()
{
	int data[]={10,2,12,3,13};
	int max2,max1,k,loc1,loc2,max3,loc3;
	loc1=0;
	loc2=0;
	max2=0;
	max1=0;
	max3=0;
	loc3=0;
	for(k=0;k<5;k++)
	{
		if(max1<data[k])
		{
			
			max1=data[k];
			loc1=k;
	}
	}
	for(k=0;k<5;k++)
	{
		if(data[k]!=max1)
		{
		
		if(max2<data[k])
		{
			
			max2=data[k];
			loc2=k;
	}}
	}
	for(k=0;k<5;k++)
	{
		if(data[k]!=max1 && data[k]!=max2)
		{
		
		if(max3<data[k])
		{
			
			max3=data[k];
			loc3=k;
	}}}
	cout<<"Largest element is "<<max1<<" location is "<<loc1;
	cout<<"\nSecond Largest element is "<<max2<<" location is "<<loc2;	
	cout<<"\nSecond Largest element is "<<max3<<" location is "<<loc3;	
	
	
}
