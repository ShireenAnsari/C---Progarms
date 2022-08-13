#include<iostream>
#include<math.h>
using namespace std;
double power(double n,int p =2);
int main()
{
	double num1,result;
	cout<<"Enter the value you want square of "<<endl;
	cin>>num1;
	cout<<"The  square of  "<<num1 <<" is "<<power(num1);
}
double power(double a,int b)
{
	double result;
	result=pow(a,b);
	return result;
}

