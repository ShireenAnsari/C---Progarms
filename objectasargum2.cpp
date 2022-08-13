#include<iostream>
using namespace std;
class Int
{
	private:
		int i;
	public:
		Int()
		{
			i=0;
		}
	void display(int ii)
	{
		i=ii;
	}
	void show(Int i1,Int i2)
	{
		i=i1.i+i2.i;
	}
	void printi()
	{
		cout<<i<<endl;
	}
};
int main()
{
	Int i1,i2,i3;
	i1.display(3);
	i2.display(4);
	i3.show(i1,i2);
	i1.printi();
	i2.printi();
	i3.printi();
	
	
}
