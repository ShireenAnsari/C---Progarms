#include<iostream>
using namespace std;
int r;
int& func();
int main()
{
	r=30;
	func()=r;
	cout<<"Value of r is "<<func();
 }
 int& func()
 {
 	return r;
 }
 
