#include<iostream>
using namespace std;
float circumcircle(float);
float circumarea(float);
int main()
{
	float r;
	cout<<"Enter radius of circle for calculating area and circumferamce"<<endl;
	cin>>r;
	cout<<"Area of circle is "<<circumcircle(r)<<endl;
	cout<<"Circumferance of circle is "<<circumarea(r)<<endl;
	return 0;
	
}
float circumcircle(float rad)
{
	return (2*3.14*rad);
}
float circumarea(float rad)
{
	return (3.14*rad*rad);
}
