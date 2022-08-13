#include<iostream>
using namespace std;
int secret(int one)
{
	int i;
	int prod=1;
	for(i=1;i<=3;i++)
	prod=prod*one;
	return one;
}
int main()
{
	cout<<secret(5)<<endl;
	cout<<2*secret(6);
	return 0;
}
