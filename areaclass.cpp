#include<iostream>
using namespace std;
class area
{
	private:
		int l,w;
	public:
		void setdata(int len,int wid)
		{
			l=len;
			w=wid;
		}
		void showdata()
		{
			cout<<"Area of rectangle is "<<l*w;
		}
};
int main()
{
	area obj1,obj2;
	obj1.setdata(4,5);
	obj2.setdata(5,6);
	obj1.showdata();
	obj2.showdata();
}
