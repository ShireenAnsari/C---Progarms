#include<iostream>
using namespace std;
float calculator(float,float,char);
int main()
{
	float num1,num2,result;
	char choice;
	cout<<"Enter value 1"<<endl;
	cin>>num1;
	cout<<"Enter value 2"<<endl;
	cin>>num2;
	cout<<"Enter Your choice "<<endl;
	cin>>choice;
	result=calculator(num1,num2,choice);
	cout<<"Result of Your choice "<<result;
	return 0;
}
float calculator(float a,float b,char ch)
{
	switch(ch)
	{
		case '+':
			return (a+b);
		break;
		case '-':
			return(a*b);
		break;
		case '*':
			return(a*b);
		break;
		case'/':
			return(a/b);
		
		
		
	}
	
}

