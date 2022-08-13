#include<iostream>
using namespace std;
struct distance
{
    int feet;
	float inches;	
};
struct distance largdist(struct distance,struct distance);
void printdist(struct distance);
int main()
{
	struct distance d1,d2,d3;
	cout<<"Enter feet for d1 "<<endl;
	cin>>d1.feet;
	cout<<"Enter inches for d1"<<endl;
	cin>>d1.inches;
	cout<<"Enter feet for d2"<<endl;
	cin>>d2.feet;
	cout<<"Enter inches for d2"<<endl;
	cin>>d2.inches;
	d3=largdist(d1,d2);
	cout<<"d1 = "<<endl;
	   printdist(d1);
	cout<<"d2= ";
	   printdist(d2);
	cout<<"Largest distance is ";
	   printdist(d3);
	
}
struct distance largdist(struct distance dd1,struct distance dd2)
{
	if(dd1.feet>dd2.feet)
	   return dd1;
	if(dd1.feet<dd2.feet)
	   return dd2;
	if(dd1.inches>dd2.inches)
	  return dd1;
	else
	  return dd2;
}
void printdist(struct distance dd)
{
	cout<<dd.feet<<" and "<<dd.inches;
}
