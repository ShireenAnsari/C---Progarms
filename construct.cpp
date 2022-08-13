#include<iostream>
using namespace std;
class counter
{
	private:
		int count;
	public:
		counter() : count(0)
		{
		   	cout<<"initial value of count = "<<count<<endl;
		}
	void inc_count()
	{
		count++;
	}
	int get_count()
	{
		return count;
	}
	
};
int main()
{
	counter c1,c2;
	c1.inc_count();
	c2.inc_count();
	c2.inc_count();
	cout<<"c1 value after return "<<c1.get_count();
	
	
}
