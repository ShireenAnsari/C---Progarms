#include<iostream>
using namespace std;
struct S
{
	char name[50];
	int age;
};
void displayData(S);   
int main()
{
	S s1={"Shireen",36};
	//s1={'Shireen',36};
	displayData(s1);
	return 0;
}
void DisplayData(S Sr1)
{
	cout<<"Student's Name:  "<<Sr1.name<<endl;
	cout<<"Student's Roll number:  "<<Sr1.age<<endl;
}
