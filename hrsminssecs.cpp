#include<iostream>
using namespace std;
class clock
{
	private:
		float hrs,mins,secs;
	public:
		clock(float h,float m,float s):hrs(h),mins(m),secs(s)
		{
			
		}
		void showdata()
		{
			cout<<"hrs mins and secs are "<<hrs<<":"<<mins<<":"<<secs;
		}
};
int main()
{
	clock myclock(50,20,39);
	clock yourclock(20,8,7);
	myclock.showdata();
	yourclock.showdata();
}
