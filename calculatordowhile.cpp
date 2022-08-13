#include<iostream>
using namespace std;
int main()
{
	char ch;
	do
	{
		char choice;
		int num1,num2;
		cout<<"Enter num1:"<<endl;;
		cin>>num1;
		cout<<"Enter num2: "<<endl;
		cin>>num2;
		cout<<"Enter Your choice(+,-,*,/)\n";
		cin>>choice;
		switch(choice)
		{
			case '+':
				cout<<"Addition of "<<num1<<"+"<<num2<<" is "<<num1+num2;
				break;
			case '-':
				cout<<"Subtraction of "<<num1<<"-"<<num2<<" is "<<num1-num2;
				break;
			case '*':
				cout<<"Multiplication of "<<num1<<"*"<<num2<<" is "<<num1*num2;
			case '/':
				cout<<"Division of "<<num1<<"/"<<num2<<" is "<<(float)num1/(float)num2;
				break;
			default:
				cout<<"Invalid choice"<<endl;
			
		}
		cout<<endl<<"Do You want to continue "<<endl;
		cin>>ch;
	} while(ch=='Y' || ch=='y');
	return 0;
}
