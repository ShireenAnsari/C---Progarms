#include<iostream>
using namespace std;
void afunc(int& a,const int& b);
int main()
{
	int a=5,b=6;
	afunc(a,b);
}
void afunc(int& a,const int& b)
{
	a=106;
	cout<<"The value of a is"<<a;
	cout<<"The value of b is"<<b;
}
