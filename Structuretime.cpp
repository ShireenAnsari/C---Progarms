#include<iostream>
using namespace std;
struct time
{
	int hrs,mins,scnds,rslts;
	
};
int main()
{
	time t1,t2;
	cout<<"Enter the time 1"<<endl;
	cin>>t1.hrs;cout<<":"; cin>>t1.mins; cout<<":"; cin>>t1.scnds;
	cout<<"Enter the time 2"<<endl;
	cin>>t2.hrs;cout<<":"; cin>>t2.mins; cout<<":"; cin>>t2.scnds;
	cout<<"Time 1 in seconds is  "<<(t1.hrs*3600)+(t1.mins*60)+(t1.scnds*1)<<endl;
	cout<<"Time 2 in seconds is  "<<(t2.hrs*3600)+(t2.mins*60)+(t2.scnds*1)<<endl;
	cout<<"In time 1 in "<<(t1.hrs*3600)+(t1.mins*60)+(t1.scnds*1)<<" seconds hours was "<< t1.hrs<<endl;
	cout<<"In time 1 in "<<(t1.hrs*3600)+(t1.mins*60)+(t1.scnds*1)<<" seconds minutes  was "<< t1.mins<<endl;
	cout<<"In time 1 in "<<(t1.hrs*3600)+(t1.mins*60)+(t1.scnds*1)<<" seconds seconds was "<< t1.scnds<<endl;
	cout<<"In time 2 in "<<(t2.hrs*3600)+(t2.mins*60)+(t2.scnds*1)<<" seconds hours was "<< t2.hrs<<endl;
	cout<<"In time 2 in "<<(t2.hrs*3600)+(t2.mins*60)+(t2.scnds*1)<<" seconds minutes  was "<< t2.mins<<endl;
	cout<<"In time 2 in "<<(t2.hrs*3600)+(t2.mins*60)+(t2.scnds*1)<<" seconds seconds was "<< t2.scnds<<endl;
	cout<<"Time 1 is "<<t1.hrs<<":"<<t1.mins<<":"<<t1.scnds<<endl;
	cout<<"Time 2 is "<<t2.hrs<<":"<<t2.mins<<":"<<t2.scnds<<endl;
	return 0;	
}
