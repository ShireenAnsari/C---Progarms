#include<iostream>
using namespace std;
void asscend(int,int);
int main()
{
	int n1,n2;
	cout<<"Enter value for n1 and n2"<<endl;
	cin>>n1>>n2;
	asscend(n1,n2);
	return 0;
}
void asscend(int n1,int n2)
{
	if(n1<n2)
	  cout<<"Asscending order printing n1="<<n1<<" n2="<<n2;
	if(n2<n1)
	  cout<<"Asscending order printing n2="<<n2<<" n1="<<n1;
	  
}
