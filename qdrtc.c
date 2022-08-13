#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float A,B,C,x1,x2,x,D;
	printf("Enter three values for A B C\t:");
	scanf("%f %f %f",&A,&B,&C);
	D=B*B-4*A*C;
	if(D>0)
	  x1=(((-1)*B)+sqrt(D))/2*A;
	  x2=(((-1)*B)-sqrt(D))/2*A;
	  printf("The values for X1 and X2 are %f %f",x1,x2);
	if(D=0)
	  x=((-1)*B)/2*A;
	  printf("The value is unique that is  %f",x);
	if(D==0)
	  printf("No solution");
	return 0;
	  
}
