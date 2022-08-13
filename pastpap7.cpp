#include<iostream>
using namespace std;
void prevnext(int x,int& prev,int& next)
{
	prev=x-1;
	next=x+1;
}
int main()
{
	int x=1,y=3,z=7;
	prevnext(x,y,z);
	cout<<"x="<<x<<"y="<<y<<"z="<<z<<endl;
	return 0;
}
