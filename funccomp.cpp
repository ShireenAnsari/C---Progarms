#include<iostream>
using namespace std;
void comp(int,int);
int main()
{
	int a=7,b=3;
	comp(b,a);
	return 0;
}
void comp(int a,int b)
{
	if(b<a)
	   cout<<b;
	else
	   cout<<a;
	
}
