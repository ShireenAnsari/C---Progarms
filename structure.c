#include<stdio.h>
#include<string.h>
struct student{
	string nam;
	string roll;
	int age;
};
int main()
{
	struct student s1;
	s1.nam="Shireen";
	s1.roll="19bscs30";
	s1.age=20;
	printf("Data is following\n");
	printf("%d\t %d\t %d\t",s1.nam,s1.roll,s1.age);
	return 0;
}
