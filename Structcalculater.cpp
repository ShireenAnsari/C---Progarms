#include<iostream>
using namespace std;
struct Fraction
{
	float a;
	float b;
	float c;
	float d;
	
};
int main()
{
	char ch;
	Fraction Opr;
	cout<<"Enter the values for num1 num2"<<endl;
	cin>>Opr.a>>Opr.b;
	cout<<"Enter the values for num3 and num4 "<<endl;
	cin>>Opr.c>>Opr.d;
	cout<<"Enter Your choice  (+,-,*,/)"<<endl;
	cin>>ch;
	switch(ch)
	{
		case '+':
			cout<<"The addition in Fraction of  "<<Opr.a<<"/"<<Opr.b<<"+"<<Opr.c<<"/"<<Opr.d<<" is "<<(Opr.a/Opr.b)+(Opr.c+Opr.d)<<endl;
		break;
		case'-':
			cout<<"The Subtraction in Fraction of  "<<Opr.a<<"/"<<Opr.b<<"-"<<Opr.c<<"/"<<Opr.d<<" is "<<(Opr.a/Opr.b)-(Opr.c+Opr.d)<<endl;
		break;
		case '*':
			cout<<"The Multiplication in Fraction of  "<<Opr.a<<"/"<<Opr.b<<"*"<<Opr.c<<"/"<<Opr.d<<" is "<<(Opr.a/Opr.b)*(Opr.c+Opr.d)<<endl;
		break;
		case '/':
			cout<<"The Division in Fraction of  ("<<Opr.a<<"/"<<Opr.b<<")/("<<Opr.c<<"/"<<Opr.d<<" )is "<<(Opr.a/Opr.b)-(Opr.c+Opr.d)<<endl;
		break;
		default:
			cout<<"Wrong operand"<<endl;
			
				
	}
	return 0;
	
	
}

