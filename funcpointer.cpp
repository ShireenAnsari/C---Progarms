#include<iostream>
using namespace std;
void div(int a,int b,int *quotient,int *remainder)
{
	*quotient=a/b;
	*remainder=a%b;
}
int main()
{
	int c=3,d=6;
	int q,r;
	div(c,d,&q,&r);
	cout<<"Quotient is "<<q<<"\n Remainder is: "<<r<<"\n";
}

