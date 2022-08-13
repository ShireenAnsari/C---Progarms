#include<iostream>
using namespace std;
class overload
{
	private:
		float length,width,height,area;
	public:
		overload(float l,float w):length(l),width(w)
		{
			area=l*w;
		}
		overload(float l,float w,float h):length(l),width(w),height(h)
		{
			area=l*w*h;
		}
		void showdata()
		{
			cout<<"Area is "<<area;
		}
		
};
int main()
{
	overload obj1(3,4),obj2(5,6,7);
	obj1.showdata();
	obj2.showdata();
	
}
