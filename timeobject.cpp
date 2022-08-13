#include<iostream>
using namespace std;
class time
{

	private:	
	int hrs,mins,secs;

    public:
    time (): hrs(8),mins(3),secs(4)
    {
	
    }
    void showdata()
    {
	cout<<"Time is "<<hrs<<":"<<mins<<":"<<secs;
    }
     time addobj(time obj)
    {
      time temp;
      temp.hrs=hrs+obj.hrs;
      temp.mins=mins+obj.mins;
      temp.secs=secs+obj.secs;
      return temp;
    }
};
int main()
{
	time obj1,obj2,obj3;
	obj3=obj1.addobj(obj2);
	obj3.showdata();
}
