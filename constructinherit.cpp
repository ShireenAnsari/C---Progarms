#include<iostream>
using namespace std;
class counter 
{
	protected:
		unsigned int count;
	public:
		counter() : count()
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
class counterdn : public counter
{
	public:
	    counterdn() : counter()
	    {
	    	
		}
		counterdn(int c) : counter(c)
		{
			
		}
		counterdn operator--()
		{
			return counterdn(--count);
			
		}
};
int main()
{
	counterdn c1;
	counterdn c2(100);
    cout<<"\nc1="<<c1.get_count();
    cout<<"\nc2="<<c2.get_count();
    ++c1; ++c1; ++c1;
    cout<<"\nc1="<<c1.get_count();
    --c2; --c2;
    cout<<"\nc2="<<c2.get_count();
    counterdn c3= --c2;
    cout<<"\nc3="<<c3.get_count();
    cout<<endl;
    return 0;
    
}
