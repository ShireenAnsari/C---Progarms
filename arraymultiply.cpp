#include<iostream>
using namespace std;
int main()
{
	int i,j,k,sum;
	int Arr1[2][2]={{1,2},
	                {3,4}};
	int Arr2[2][2]={{5,6},
	                {7,8}};
	int Arr[2][2];
	cout<<"Matrix 1"<<endl;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<Arr1[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"Matrix 2 "<<endl;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<Arr2[i][j]<<" ";
		}
		cout<<endl;
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			sum=0;
			for(k=0;k<2;k++)
			{
			sum=sum+Arr1[i][k]*Arr2[k][j];
			Arr[i][j]=sum;
			}
		}
	}
	cout<<"Multiplication of Matrix is given below"<<endl;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<Arr[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
}
