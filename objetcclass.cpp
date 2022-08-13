#include<iostream>
#include<cstring>
using namespace std;
class student
{
	private:
		char nam[20];
		char rolnum[20];
	public:
		void setdata(char n[20],char r[20])
		{
			strcpy(nam,n);
			strcpy(rolnum,r);
		}
		void showdata()
		{
			cout<<"Name= "<<nam<<endl;
			cout<<"Roll number= "<<rolnum;
		}
		
};
int main()
{
	student s1;
	s1.setdata("shireen","19bscs30");
	s1.showdata();
	
}
