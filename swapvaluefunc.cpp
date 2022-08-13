#include<iostream>
using namespace std;
int swap(int,int);
int main()
{
	int num1=2,num2=3;
	cout<<num1 <<" and "<<num2<<" after swapping becomes ";
	swap(num2,num1);
	return 0;
	
}
int swap(int n1,int n2)
{
	cout<<n1<<" and "<<n2;
}
