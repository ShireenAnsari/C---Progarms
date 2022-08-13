#include<iostream>
using namespace std;
class unaryExample
{
	private:
		int data;
	public:
	unaryExample(int j)
		{
			data=j;
		}
	int operator++()
	{
		return (++data);
	}
};
int main()
{
	unaryExample obj1(10); 
	
	cout<<++obj1;
	
}
