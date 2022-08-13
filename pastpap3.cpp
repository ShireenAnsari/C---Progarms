#include<iostream>
using namespace std;
int subtract(int,int);
int main()
{
	int num1,num2;
	cout<<"Enter first value "<<endl;
	cin>>num1;
	cout<<"Enter second value "<<endl;
	cin>>num2;
	if(num1<num2)
	  cout<<"Greater value can not be subtracted from smaller value";
	if(num1>num2)
	   cout<<"Subtraction is "<<subtract(num1,num2);
	return 0;
}
int subtract(int n1,int n2)
{
	return n1-n2;
}
