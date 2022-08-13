#include<iostream>
#include<cstring>
using namespace std;
class library
{
	private:
		char BookNo[20],BookTitle[20];
	public:
		void get_info(char bk[],char bt[])
		{
			strcpy(BookNo,bk);
			strcpy(BookTitle,bt);
		}
		void show_info()
		{
			cout<<"Book No is  "<<BookNo<<" and Book title is "<<BookTitle<<endl;;
		}
	
};
int main()
{
	library obj1,obj2;
	obj1.get_info("ITOOP205","C++");
	obj1.show_info();
	obj2.get_info("hdkf","Mathmetics");
	obj2.show_info();
	return 0;
}
