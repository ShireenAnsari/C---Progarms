#include<iostream>
using namespace std;
#include<conio.h>
void starline(int=50,char='=');
int main()
{
	starline();
	starline('-');
	starline(50,'+');
	getch();
}
void starline(int n,char ch)
{
	int i;
	for(i=0;i<=n;i++)
	cout<<ch;
	cout<<endl;
}
