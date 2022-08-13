#include<iostream>
using namespace std;
void add(int& a,int& b,int& c)
{
	a=5,b=6,c=8;
	a*=2;
	b*=2;
	c*=2;
	
}
int main()
{
	int x,y,z;
	add(x,y,z);
	cout<<"x="<<x<<"y="<<y<<"z="<<z;
}
