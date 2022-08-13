#include<iostream>
#include<cstring>
using namespace std;
class test
{
	private:
		int age;
		char nam[8];
	public:
		test()
		{
			
		}
		test(char ch[8])
		{
			strcpy(nam,ch);
			
		}
		test (char ch[8],int n )
		{
			strcpy(nam,ch);
			age=n;
		}
		void showdata()
		{
			cout<<"Name = "<<nam<<" age = "<<age;
		}
};
int main()
{
	test obj1,obj2("shireen"),obj3("shireen",20);
	obj3.showdata();
}
