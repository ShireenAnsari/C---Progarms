#include<iostream>
using namespace std;
class distance
{
	private:
		int feet;
		float inches;
	public:
	  void  setdata(int f,float i)
	{
		feet=f;
		inches=i;
	}
	void putfeet()
	{
		cout<<"feet sum is "<<feet<<endl;
		cout<<"inches sum is "<<inches<<endl;
		
	}
	void sum(distance d1,distance d2)
	{
		feet=d1.feet+d2.feet;
		inches =d1.inches+d1.inches;
	}
};
int main()
{	
  class distance d1,d2,d3;
	d1.setdata(3,4);
	d2.setdata(4,5);
	d3.sum(d1,d2);
	d1.putfeet();
	d2.putfeet();
	d3.putfeet();
	
}

