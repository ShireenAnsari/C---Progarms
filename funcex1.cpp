#include<iostream>
#include<conio.h>

using namespace std;
void starline();
int main()
{
	starline();
	cout<<" \nchar   -128 to 128"<<endl;
	cout<<"short    -32768 to 32768"<<endl;
	cout<<"int     system dependent "<<endl;
	cout<<"long     -2147483648 to 2147483648 "<<endl;
	starline();
	getch();
}
void starline()
{
	int i;
	for(i=0;i<=20;i++)
	cout<<"*";
	
}
