#include<iostream>
using namespace std;
struct fraction
{
	float numerator;
	float denominator;
};
struct fraction func(struct fraction);
fraction fadd(struct fraction,struct fraction);
int main()
{
	char ch;
struct	fraction num1,num2,num3;
	cout<<"Enter value for num1 denominator "<<endl; cin>>num1.denominator;
	cout<<"Enter value for num 1 numerator "<<endl; cin>>num1.numerator;
	cout<<"Enter value for num2 denominator "<<endl; cin>>num2.denominator;
	cout<<"Enter value for num 2 numerator "<<endl; cin>>num2.numerator;
	cout<<"Enter Your choice \n";
	cin>>ch;
	switch(ch)
	{
		case '+':
		//num3=fadd(num1,num2);
		cout<<"n1=";
		func(num1);
		cout<<endl<<"n2=";
		func(num2);
		cout<<"Addition is ";
		//func(num3);
		break;
		case '-':
			cout<<"Nothing";
	}
	
	}
struct	fraction fadd(struct fraction n1,struct fraction n2)
	{
	fraction result={(n1.numerator * n2.denominator) + (n2.numerator * n1.denominator),  n1.numerator* n2.denominator};
	return result;
	}
	//void fraction func(struct fraction n)
	//{
			//n.denominator/n.;
	//}

