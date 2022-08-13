#include<iostream>
using namespace std;
enum etype { laborer, secretary, manager, accountant, executive,
researcher };
int main()
{
	enum etype E1;
	char choice;
	cout<<"Enter employee type (first letter only) laborer, secretary, manager, accountant, executive, researcher):";
	cin>>choice;
	switch(choice)
	{
		case'l':
			E1=laborer;
		    cout<<"You searched for laborer";
		    break;
		case 's':
			E1=secretary;
			cout<<"You searched for Secretary";
		    break;
		case 'm':
			E1=manager;
			cout<<"You searched for manager";
			break;
		case 'a':
		     E1=accountant;
		     cout<<"You searched for accountant";
		     break;
	    case 'e':
	    	E1=executive;
	    	cout<<"You searched for Executive";
	    	break;
	    case 'r':
	    	E1=researcher;
	    	cout<<"You searched for researcher";
	    	break;
		
		
	}
}
	
