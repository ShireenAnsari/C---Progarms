#include<iostream>
using namespace std;
class subt
{
	private:
		int num;
	public:
		void setdata(int i)
		{
			num=i;
		}
	void showdata()
	{
		cout<<"Dcrement is "<<num;
	}
	void operator--()
	{
		num--;
	}
};
int main()
{
	subt obj1;
	obj1.setdata(5);
	--obj1; //obj1.operand--()
	obj1.showdata();
}
