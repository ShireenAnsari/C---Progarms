#include<iostream>
using namespace std;
int distances(int,int);
int main()
{
	int dist1,dist2;
	cout<<"Enter distance 1"<<endl;
	cin>>dist1;
	cout<<"Enter distance 2 value "<<endl;
	cin>>dist2;
int result=	distances(dist1,dist1);
cout<<"Larger distance is "<<result;
	
}
int distances (int a, int b)
{
	if(a<b)
	  return b;
	else 
	  return a;
}
