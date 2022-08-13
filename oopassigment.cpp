#include<iostream>
using namespace std;
class cars
{
	private:
		string name;
		float model,price;
	public:
		void setdata(string n,float m,float p)
		{
			name=n;
			model=m;
			price=p;
		}
		void showdata()
		{
			cout<<"car Name="<<name<<" car Model number= "<<model<<" car price "<<price<<endl;
		}
};
int main()
{
	cars c1,c2;
	c1.setdata("Mercidies",1954,450.6);
	c2.setdata("Lamberghini",2021,1234);
	c1.showdata();
	c2.showdata();
	
}
