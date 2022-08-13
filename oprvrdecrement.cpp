#include<iostream>
using namespace std;
class oprovr
{
	private:
		int num;
	public:
		void setdata(int a)
		{
			num=a;
		}
		void showdata()
		{
			cout<<"decrement is "<<num;
		}
		int operator--()
		{
			return num--;
		}
};
int main()
{
	oprovr obj1;
	obj1.setdata(4);
	--obj1;
	obj1.showdata();
	return 0;
}
