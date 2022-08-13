#include<iostream>
using namespace std;
struct part
{
	int modelnumber;
	int partnumber;
	float cost;
	
};
int main()
{
part part1;
part1.modelnumber=6234;
part1.partnumber=373;
part1.cost=217.55f;
cout<<"Model "<<part1.modelnumber<<endl;
cout<<"Part  "<<part1.partnumber<<endl;
cout<<"Cost  "<<part1.cost<<endl;
return 0;  
}
