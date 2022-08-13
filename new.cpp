#include<iostream>
using namespace std;
int main()
{
	int* ptr;
	ptr=new int;
	*ptr=24;
	cout<<*ptr;
	delete ptr;
}
