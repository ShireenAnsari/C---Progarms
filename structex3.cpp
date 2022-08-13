#include<iostream>
#include<conio.h>
using namespace std;
void repchar(char c ,int d);
int main()
{
	char a;
	int b;
	cout<<"Enter character and number You want to print"<<endl;
	cin>>a>>b;
	repchar(a,b);	
	getch();
}
void repchar(char a,int b)
{
	int i;
	for(i=0;i<=b;i++)
	cout<<a;
	
}
