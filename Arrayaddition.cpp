#include<iostream>
using namespace std;
int main()
{
	int i,j;
	int Arr1[3][3];
	int Arr2[3][3];
	int Arr[3][3];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<"Enter the value for Arr1["<<i<<","<<j<<"] = ";
			cin>>Arr1[i][j];
		}
	}
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<"Enter the value for Arr2["<<i<<","<<j<<"] = ";
			cin>>Arr2[i][j];
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			Arr[i][j]=Arr1[i][j]*Arr2[i][j];
			
		}
	}
	cout<<" Resultant"<<endl;
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<Arr[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
	
	
}
