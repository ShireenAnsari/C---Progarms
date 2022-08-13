#include<iostream>
#include<conio.h>
using namespace std;
unsigned long fact(unsigned long n);
int main()
{
	unsigned long num1,factorial;
	cout<<"Enter the number you want factorial of "<<endl;
	cin>>num1;
	factorial=fact(num1);
	cout<<"The factorial of "<<num1<<" is "<<factorial;
	getch();
}
unsigned long fact(unsigned long n)
{
	if(n>1)
	
		return n*fact(n-1);
	else
		return 1;
	
}
