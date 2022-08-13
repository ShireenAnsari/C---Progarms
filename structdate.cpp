#include<iostream>
using namespace std;
struct date
{
	int day;
	int month;
	int Year;
};
int main()
{
	date d1;
	cout<<"Enter the day:  ";
	cin>>d1.day;
	cout<<"Enter the month: ";
	cin>>d1.month;
	cout<<"Enter the Year: ";
	cin>>d1.Year;
	cout<<"Your entered date is:  "<<d1.day<<"/"<<d1.month<<"/"<<d1.Year;
	return 0;
}
