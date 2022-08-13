#include<iostream>
using namespace std;
int main()
{
	int Arr1[2][2];
	int Arr2[2][2];
	int Rs[2][2];
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
	{
		cout<<"Enter the value for Arr1 ["<<i<<","<<j<<"]";
		cin>>Arr1[i][j];
	}}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
	{
		cout<<"Enter the value for Arr1 ["<<i<<","<<j<<"]";
		cin>>Arr2[i][j];
	}}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
	{
		Rs[i][j]=Arr1[i][j]+Arr2[i][j];
		
	}}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<Rs[i][j]<<endl;
		}
	}
	
	return 0;
	
}
