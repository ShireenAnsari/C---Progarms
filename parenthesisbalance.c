#include<stdio.h>
#include<conio.h>
int max=15;
void push(int newstack[],int *top,int val)
{
	if(*top<=max)
	
	{
	*top=*top+1;
	val=newstack[*top];	
	}
	else
	{
		printf("The stack is empty\n");
		
	}
	
}

void pop(int newstack[],int *top,int val)
{
	if(*top>=0)
	{
		val=newstack[*top];
		*top=*top-1;
	}
	else
	{
		printf("No value can be entered because stack is empty");

	}
}
int main()
{
	int stack[max];
	int top=-1;
	int dat;
	int n;
	do
	{
		do
		{
			printf("Enter the element you want to insert\n");
			scanf("%d",&dat);
			push(stack,&top,dat);
			printf("Would you want to continue press 1\n");
			scanf("%d",&n);
		}
		while(n==1);
		printf("Press 1 to push an element");
		scanf("%d",&n);
		while(n==1)
		{
		
	   pop(stack,&top,dat);
	   printf("The value popped is %d\n",dat);
	   printf("To pop an element enter 1\n");
	   scanf("%d",&n);
			
		}
		printf("To continue enter 1\n");
		scanf("%d",&n);
		
	}
	while(n==1);
}
