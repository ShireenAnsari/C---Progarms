#include<iostream>
using namespace std;
class counter
{
	protected:
		unsigned int count;
	public:
		counter(): count(0)
		{
			
		}
		counter(int c) : count(c)
		{
			
		}
		unsigned int get_count()
		{
			return count;
		}
		counter operator++()
		{
			return counter(++count);
		}
	};
	class countdn : public counter
	{
		public:
			counter operator--()
		{return counter(--count);}
	};
	int main()
	{
		countdn c1;
		counter c2;
		c2.
		cout<<"\nc2="<<c2.get_count();
		++c2 ;  ++c2; 
		cout<<"\nc2="<<c2.get_count();
		cout<<"\nc1="<<c1.get_count();
		++c1; ++c1; ++c1;
		cout<<"\nc1="<<c1.get_count();
		--c1; --c1;
		cout<<"\nc1="<<c1.get_count();
		cout<<endl; 
		return 0;
	}
	
