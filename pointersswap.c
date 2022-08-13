#include<stdio.h>

int main()
{
	
	int x,y;
	x=20;
	y=30;
	int* px;
	int* py;
	*px=&x;
	*py=&y;
	*px=*px+*py;
	printf("After swaping a=%d \n and b=%d",*px,*py);
	return 0;
	
}
