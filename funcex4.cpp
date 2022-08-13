#include<iostream>
using namespace std;
void zerosmaller(int&,int&);
int main()
{
	int a=3,b=4,c=6,d=7;
	zerosmaller(a,b);
	cout<<"a ="<<a<<" and b= "<<b<<endl;;
	zerosmaller(c,d);
	cout<<"c ="<<c<<" and d= "<<d<<endl;
	
}
void zerosmaller(int& first,int& second)
{
	if(first<second)
	   first=0;
	else
	   second=0;
}
