#include<iostream>
#include<math.h>
using namespace std;
class oprover
{
	private:
		int n;
	public:
	oprover(int num):n(num)
	{	
	}
	oprover operator^(oprover obj)
	{
	return	pow(n,obj.n);
	}
	void showdata()
	{
		cout<<"Power is  "<<n;
	}
};
int main()
{
	oprover obj1(2),obj2(3);
	oprover obj3;
	obj3=obj2^obj1;
	obj3.showdata();
	
}

