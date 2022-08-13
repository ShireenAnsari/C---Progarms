#include<iostream>
using namespace std;
void repchar(char c,int d);
int main()
{
	repchar('-',50);
	cout<<" \nchar   -128 to 128"<<endl;
	cout<<"short    -32768 to 32768"<<endl;
	cout<<"int     system dependent "<<endl;
	cout<<"long     -2147483648 to 2147483648 "<<endl;
	repchar('+',50);
}
void repchar(char a,int b)
{
	int j;
	for(j=0;j<=b;j++)
	cout<<a;
	
}
