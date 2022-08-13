#include<iostream>
using namespace std;
class increm
{
	private:
		int i;
	public:
		void setdata(int j)
		{
			i=j;
		}
		void showdata()
		{
			cout<<"i is "<<i;
		}
		increm operator++()
		{
			increm temp;
			temp.i=i++;
		return	temp;
		}
};
int main()
{
	increm c1,c2;
	c1.setdata(4);
	c2=++c1;
	c1.showdata();
}
