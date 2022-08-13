#include<iostream>
using namespace std;
class a
{
	private:
		int a1;
	protected:
		void setvalue(int num)
		{
			a1=num;
		}
	public:
	  void showdata()
	  {
	  	cout<<"Value of obj1 = "<<a1;
	  }
};
class b : public a
{
	public:
		void setdata(int n)
		{
			setvalue(n);
		}
		
};
int main()
{
	b obj1;
	obj1.setdata(3);
	obj1.showdata();
}

