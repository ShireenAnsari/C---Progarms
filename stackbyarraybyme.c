#include<stdio.h>
#include<stdbool.h>
#include<conio.h>
int max=2;
int stack[2];
int top=-1;
void push(int data)
{
  if(top<=max-1)
  {
  	top++;
  	stack[top]=data;
  }
}
bool isfull()
{
	if(top>max-1)
	
	  {
	  return true;}
	else
	   return false;
}
bool isEmpty()
{
	if(top==-1)
   {
   return true;}
   else
     return false;
}
void pop()
{
	if(top>=0)
	{
	
	printf("%d",stack[top--]);
	}
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
	if(isfull()==false)
	{
	push(data);
	printf("Would You want to continue Press 1 \n");
	scanf("%d",&choice);}
}
while(choice==1);
display();
do{

printf("\nWould You want to Pop an element press 1\n");
    scanf("%d",&choice);
   pop();
}
while(choice==1);
}

