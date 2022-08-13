#include<iostream>
#include<conio.h>
using namespace std;
void print();
void print(char);
void print(char,int);
int main()
{
	print();
	cout<<endl;
	print('=');
	cout<<endl;
	print('+',50);
	getch();
}
void print()
{
	int i;
	for(i=0;i<=45;i++)
	cout<<"-";
}
void print(char ch)
{
	int i;
	for(i=0;i<=50;i++)
	cout<<ch;
}
void print(char ch,int n)
{
	int i;
	for(i=0;i<=n;i++)
	cout<<ch;
}
