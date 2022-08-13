#include<iostream>
using namespace std;
class time
{
	private:
		int h,m;
	public:
		void gettime(int x,int y)
		{
			h=x,m=y;
		}
	void puttime()
	{
			cout<<"hours = "<<h<<endl;
	        cout<<"mins = "<<m<<endl;
	}
	
	void sum(time t1,time t2)
	{
	m=t1.m+t2.m;
	h=m/60;
	m=m%60;
	h=h+t1.h+t2.h;
	}
};
int main()
{
	time t1,t2,t3;
	t1.gettime(3,40);
	t2.gettime(4,20);
	t3.sum(t1,t2);
	t1.puttime();
	t2.puttime();
	t3.puttime();
	return 0;
}

