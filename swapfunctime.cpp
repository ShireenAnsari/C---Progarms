#include<iostream>
using namespace std;
struct time
{
	int hours,mins,secs;
};
void hrs(time,time);
int main()
{
	time t1,t2;
	cout<<"Enter hours mins scnds for time 1"<<endl; cin>>t1.hours>>t1.mins>>t1.secs;
	cout<<"Enter hours mins scnds for time 2"<<endl; cin>>t2.hours>>t2.mins>>t2.secs;
	cout<<"The time "<<t1.hours<<":"<<t1.mins<<":"<<t1.secs<<"and time "<<t2.hours<<":"<<t2.mins<<":"<<t2.secs<<" after swapping becomes ";
	hrs(t2,t1);
}
void hrs(time tt1,time tt2)
{
	cout<<tt1.hours<<":"<<tt1.mins<<":"<<tt1.secs<<" and "<<tt2.hours<<":"<<tt2.mins<<":"<<tt2.secs;
}
