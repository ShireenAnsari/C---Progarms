#include<iostream>
using namespace std;
struct volume
{
	int feet;
	float inches; 
};
struct Room
{
	volume length;
	volume width;
	volume height;
	
};
int main()
{
	Room dining;
	dining.length.feet=13;
	dining.length.inches=4.5;
	dining.width.feet=14;
	dining.width.inches=3.4;
	dining.height.feet=16;
	dining.height.inches=6.8;
	float l=dining.length.feet+dining.length.inches/12;
	float w=dining.width.feet+dining.width.inches/12;
	float h=dining.height.feet+dining.height.inches/12;
	float v=l*w*h;
	cout<<"The volume of room is  "<<v<<endl;
	return 0;
}
