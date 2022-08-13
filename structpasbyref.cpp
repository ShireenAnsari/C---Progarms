#include<iostream>
using namespace std;
struct circle
{
	float r;
};
void area(struct circle&);
int main()
{
	circle c1,c2;
	cout<<"Enter radius for C1";
	cin>>c1.r;
	cout<<"Enter radius for C2";
	cin>>c2.r;
	area(c1);
	area(c2);
}
void area(struct circle& c)
{
	cout<<"Area of circle  is"<<c.r*c.r*3.14;
}
