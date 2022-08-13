#include<iostream>
using namespace std;
int main()
{
	int x=3, y=5;
	x = x ^ y;
	y = x ^ y;
	x = x ^ y;
	cout << "Swapping of two numbers are " << x << " and " << y;	return 0
}