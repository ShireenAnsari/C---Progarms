#include<iostream>
using namespace std;
class sum
{
	private:
		int a,b;
	public:
		void setdata(int num1,int num2)
		{
			a=num1,b=num2;
		}
		void showdata()
		{
			cout<<"a is "<<a<< "and b is "<<b;		}
		sum add(sum obj1)
		{
			sum temp;
			temp.a=a+obj1.a;
			temp.b=b+obj1.b;
			return temp;
		}
};
int main()
{
	sum obj1,obj2,obj3;
	obj1.setdata(3,4);
	obj2.setdata(5,6);
	obj3=obj1.add(obj2);
	obj3.showdata();	
}
