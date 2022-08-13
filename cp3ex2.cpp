#include<iostream>
using namespace std;
struct point{
	float x,y;
};
int main()
{
	point p1,p2,sum;
	cout<<"Enter the cordinates for x and y: ";
	cin>>p1.x>>p1.y;
	cout<<"Enter the cordinates 2 of x and y: ";
	cin>>p2.x>>p2.y;
	cout<<"The addition of cordinates p1 and p2 are: ("<<p1.x+p2.x<<","<<p1.y+p2.y<<")";
	return 0;
	
	
	
}

