#include<iostream>
#include<windows.h>
#include<iomanip>
using namespace std;
struct empl{
	int empnum;
	float empcomp;
}; 
int main()
{
	empl empl1,empl2,empl3;
	cout<<"Enter the employee 1 number"<<endl;
	cin>>empl1.empnum;
	cout<<"Enter the employee 1 compensation"<<endl;
	cin>>empl1.empcomp;
	cout<<"Enter the employee 2 number"<<endl;
	cin>>empl2.empnum;
	cout<<"Enter the employee 2 compensation"<<endl;
	cin>>empl2.empcomp;
	cout<<"Enter the employee 3 number"<<endl;
	cin>>empl3.empnum;
	cout<<"Enter the employee 3 compensation"<<endl;
	cin>>empl3.empcomp;
	system("cls");
	cout<<setw(30)<<"Employee number:  "<<"Employe compensations"<<endl;
	cout<<setw(20)<<"1: "<<empl1.empnum <<"           "<<empl1.empcomp<<endl;
	cout<<setw(20)<<"2: "<<empl2.empnum <<"            "<<empl2.empcomp<<endl;
	cout<<setw(20)<<"3: "<<empl3.empnum <<"            "<<empl3.empcomp<<endl;
}
