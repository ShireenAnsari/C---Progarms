#include<iostream>
using namespace std;
class oprovr
{
	private:
		int a;
	public:
	oprovr(int b):a(b)
	{
		
	}
	int operator<(oprovr obj)
	{
	if(a<obj.a)
	  return 0;
	 else
	   return 1;	
		}
	int operator>(oprovr obj)
	{
		if(a>obj.a)
		  return 0;
		else
		  return 1;
	}
	int operator=(oprovr obj)
	{
		if(a=obj.a)
		   return 0;
		else 
		   return 1;
	}
};
int main()
{
	oprovr obj1(20),obj2(30);
	{
		if(obj1<obj2)
		 cout<<"First is less then second";
		if(obj1>obj2)
		cout<<"First is greater then second ";
		if(obj1=obj2)
		cout<<"Both are equal";
	}
}
