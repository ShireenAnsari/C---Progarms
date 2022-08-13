#include<iostream>
using namespace std;
struct phnum{
	int cod,exc,num;
};
int main()
{
	phnum p1={212,767,8900};
	phnum p2;
	cout<<"Enter your area code,exchange and number:";
	cin>>p2.cod>>p2.exc>>p2.num;
	cout<<"My number is ("<<p1.cod<<")  "<<p1.exc<<"-"<<p1.num<<endl;
	cout<<"Your number is ("<<p2.cod<<")  "<<p2.exc<<"-"<<p2.num<<endl;
	return 0;
}
