#include<iostream>
using namespace std;
class student
{
	private:
		char nam[30];
		char Rnm[20];
	public:
		void setdata(char n[],char R[])
		{
			n=nam;
		     R=Rnm;
		}
		void showdata()
		{
			cout<<"student's Name: =  "<<nam<<endl;
			cout<<"student's Rollnumber: =  "<<Rnm<<endl;
			
		}
};
int main()
{
	student s1;
	s1.setdata('shireen','19bscs30');
	s1.showdata();
	
}
