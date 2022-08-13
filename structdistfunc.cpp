#include<iostream>
using namespace std;
struct distance
{
	int feet;
	float inch;
};
void distfunc(struct distance);
int main()
{
	struct distance d1,d2;
	cout<<"Enter the value for d1 of feet"<<endl;
	cin>>d1.feet;
	cout<<"Enter the value of inch for d1"<<endl;
	cin>>d1.inch;
	cout<<"Enter the value for d2 of feet"<<endl;
	cin>>d2.feet;
	cout<<"Enter the value of inch for d2"<<endl;
	cin>>d2.inch;
	cout<<"d1=";
	 distfunc(d1);
	cout<<"/n d2=";
	distfunc(d2);
	return 0;
	
}
void distfunc(struct distance d)
{
	cout<<"Distance in feet and inches are \n";
	cout<<d.feet<<" "<<d.inch;
}
