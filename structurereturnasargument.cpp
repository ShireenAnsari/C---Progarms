#include<iostream>
using namespace std;
struct distance
{
	int inches;
	float feet;
};
struct distance add(struct distance ,struct distance );
void strucdist(struct distance);
int main()
{
	struct distance d1,d2,result;
	cout<<"Enter value for d1 inches"<<endl;
	cin>>d1.inches;
	cout<<"Enter value for d1 feet"<<endl;
	cin>>d1.feet;
	cout<<"Enter value for d2 inches"<<endl;
	cin>>d2.inches;
	cout<<"Enter value for d2 feet"<<endl;
	cin>>d2.feet;
	result=add(d1,d2);
	cout<<"d1="; 
	strucdist(d1);
	cout<<endl<<"d2=";
	strucdist(d2);
	cout<<"Larger distance is ";
	 strucdist(result);		
}
struct distance add(struct distance dd1,struct distance dd2)
{
	if(dd1.feet>dd2.feet)
	   return dd1;
	if(dd2.feet>dd1.feet)
	   return dd2;
	if(dd1.inches>dd2.inches)
	   return dd1;
	else
	  return dd2;
	
}
void strucdist(struct distance dd)
{
	cout<<dd.feet<<":"<<dd.inches;
}
