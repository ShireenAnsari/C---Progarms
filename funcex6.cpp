#include<iostream>
using namespace std;
int hms_to_secs(int a,int b,int c);
int main()
{
	int h,m,s,result;
	cout<<"Enter hours "<<endl;
	cin>>h;
	cout<<"Enter minutes"<<endl;
	cin>>m;
	cout<<"Enter seconds"<<endl;
	cin>>s;
	result=hms_to_secs(h,m,s);
	cout<<"In "<<h<<":"<<m<<":"<<s<<"there are "<<result<<" seconds";
}
int hms_to_secs(int hrs,int min,int scnds)
{
	int result=hrs*3600+min*60+scnds*1;
	  return result;
}
