#include<stdio.h>
int main(){
	int x,y;
	x=20;
	y=30;
	int* px;
	int* py;
	*px=&x;
	*py=&y;
	*px=*px+*py;
	*py=*px-*py;
	*px=*px-*py;
	printf("After swaping a=%d \t and b=%d",px,py);
	
	
}
