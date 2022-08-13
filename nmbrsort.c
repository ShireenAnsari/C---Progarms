#include<stdio.h>
#include<conio.h>
int main()
{
	int data[10]={22,65,1,99,32,17,74,49,33,2};
	int max,k,loc;
	loc=0;
	max=data[0];
	k=0;
	for(k=0;k<10;k++)
	{
		if(max<data[k])
		{
			
			loc=k;
			max=data[k];}
		}
	
    printf("Location is %d and number is %d",loc,max);
}
