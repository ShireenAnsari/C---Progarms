#include<iostream>
using namespace std;
class sum
{
	private:
		int a,b;
	public:
		void setdata()
		{
			cout<<"Enter value for num1"<<endl;
			cin>>a;
			cout<<"Enter value for num2"<<endl;
			cin>>b;
		}
		int showdata()
		{
			int result;
			result=a+b;
			return result;
			
		}
};
int main()
{
	sum obj1,obj2;
	int result;
	obj1.setdata();
	result=obj1.showdata();
	cout<<"Addition is "<<result;
	
}
