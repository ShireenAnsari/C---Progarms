#include<stdio.h>
#include<conio.h>
int stack[10];
int max=10;
int top=-1;
void push(int data)
{
	if(top<=max-1)
	{
	   top++;
	   stack[top]=data;
	}
}
int pull()
{
	if(top>-1)
	{
	
	   return stack[top--];}
}
void underflow()
{
	printf("Stack is underfollow\n");
}
void display()
{
	if(top>=0)
	{
	
	int i;
	printf("The elements are\n");
	for(i=top;i>=0;i--)
	{
	   printf("%d",stack[i]);	
	}}
}
int main()
{
	int data;
	int choice;
	do{
	
	printf("Enter the data to be inserted\n");
	scanf("%d",&data);
	push(data);
	printf("Would You want to continue Press 1 \n");
	scanf("%d",&choice);
}
while(choice==1);
display();

	do{

printf("\nWould You want to Pop an element press 1\n");
    scanf("%d",&choice);
//   data=pull();
//   printf("%d",data);
   if(pull()<=-1)
   {
   	  underflow();
   }
   else
   {
   	data=pull();
   	 printf("%d",data);
   }
}
while(choice==1);
//if(pull()==stack[-1])
		
}
