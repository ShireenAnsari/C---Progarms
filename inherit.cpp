#include<iostream>
using namespace std;
enum posneg {pos,neg};
class distance
{
	protected:
		int feet;
		float inches;
	public:
		distance(): feet(0),inches(0)
		{	    }
		distance(int ft,float in): feet(ft),inches(in)
		{    	}
		void getdist()
		{
			cout<<"Enter feet:"; cin>>feet;
			cout<<"Enter inches:"; cin>>inches;
		}
		void showdist()
		{
			cout<<feet<<"\\"<<inches<<"'\\'";
		}		
};
class distsign : public distance
{
	private:
		posneg sign;
	public:	
	distsign(): distance()  //this calls the constructor of base class
	{
		sign=pos;
	}
	distsign(int ft,float in,posneg sg=pos) : distance(ft,in)
	{
		sign=sg;
	}
	void getdist()
	{
		distance::getdist();
		char ch;
		cout<<"Enter sign (+or-):"; cin>>ch;
		sign=(ch=='+') ?  pos:neg;  // we can use this method also that is if(ch=='+') cout<<pos else negative
	}
	void showdist() 
	{
		cout<<((sign==pos) ? "(+)":"(-)");
		distance::showdist();
	}
};
int main()
{
	distsign alpha;
	alpha.getdist();
	distsign beta(11,6.25);
	distsign gamma(100,5.5,neg);
	cout<<"\nalpha=";alpha.showdist();
	cout<<"\nbeta=";beta.showdist();
	cout<<"\ngamma=";gamma.showdist();
	cout<<endl;
	return 0;
}
	

