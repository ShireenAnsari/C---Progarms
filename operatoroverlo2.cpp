#include<iostream>
using namespace std;
class add
{
	private:
		int a,b,c;
	public:
		void setdata(int i,int j, int k)
		{
			a=i;
			b=j;
			c=k;
		}
		void showdata()
		{
			cout<<"a = "<<a<<" b =" <<b<<" c= "<<c;
		}
		add operator+(add cc)
		{
			add temp;
			temp.a=a+cc.a;
			temp.b+cc.b;
			temp.c=c+cc.c;
			return temp;
		}
};
int main()
{
	add c1,c2,c3,c4;
	c1.setdata(4,5,6);
	c2.setdata(3,2,8);
	c3.setdata(6,7,8);
	c4=c1+c2+c3;
	c4.showdata();
}
