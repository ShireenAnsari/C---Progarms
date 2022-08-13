#include<iostream>
using namespace std;
bool istrue=true;
int main()
{
	int pin,count=0,choice;
	int password=575757;
	double deposit=0.0,balance=5000.0,withdraw=0.0;
	system("color 4E");
	do
	{
	cout<<"*****************WELCOME TO SHIRI'S ATM MACHINE*************************"<<endl;
	cout<<endl<<"\n\t\tEnter Your Pin   ";
	cin>>pin;
	system("cls");
	if(pin==password)
	{
		do
		{
			cout<<"*****************WELCOME TO SHIRI'S ATM MACHINE*************************\n"
	       <<"1.Deposit\n"
	       <<"2.Withdraw\n"
	       <<"3.Balance\n"
	       <<"4.exit\n";
	       cout<<"Choose an Option\n";
	       cin>>choice;
	       switch(choice)
	       {
	       	case 1:
	       		cout<<"Enter the amount you want to deposit"<<endl;
	       		cin>>deposit;
	       		system("cls");
	       		if(deposit<=0)
				   cout<<"Ammount must be greater then zero Please try again"<<endl;
	       		else
	       		    {
					   balance=balance+deposit;
	       		   cout<<"Current balance is "<<balance<<endl;}
	       		break;
	       	case 2:
	       		cout<<"Enter the amount you want to withdraw"<<endl;
	       		cin>>withdraw;
	       		system("cls");
	       		if(withdraw<=0)
				   cout<<"Ammount must be greater then zero"<<endl;
	       		else
	       		    {
					   balance=balance-withdraw;
	       		    cout<<"Current balance is "<<balance;}
	       		break;
	       	case 3:
	       		cout<<"Current balance is "<<balance<<endl;
	       		break;
	       	case 4:
	       		cout<<"Have a nice Day :)"<<endl;
	       		istrue=false;
	       		break;
	       	   
		   }
		}
		while(istrue!=false);
	  
	  	
	}
	else
	  {
	    count++;
		  if(count==3)
		     istrue=false;
		  else
		   cout<<"Wrong Pin!\n";
	  }
	    
	   
    }
    while(istrue!=false);
    return 0;
}
