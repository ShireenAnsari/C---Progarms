#include<iostream>
#include<conio.h>
using namespace std;
float circarea(float);
int main()
{
	float r;
	cout<<"Enter the radius of circle "<<endl;
	cin>>r;
cout<<"Area of circle is "<<circarea(r);
getch();
}
float circarea(float r)
{
	return (3.14*r*r);
 } 
