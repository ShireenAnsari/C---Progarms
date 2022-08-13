#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
	int dat;
	struct node* next;
};
struct node* top=0;
void push(int dat)
{
 struct node* newnode;
 newnode=(struct node*)malloc(sizeof(struct node));
 newnode->dat=dat;
 newnode->next=top;
 top=newnode;	
}
void display()
{
	struct node* temp;
	temp=top;
	if(top==0)
	{
		printf("List is empty\n");
	}
	else
	  while(temp!=0)
	  {
	  	printf("%d\n",temp->dat);
	  	temp=temp->next;
	  }
}
void peek()
{
	if(top==0)
	{
		printf("Stack is empty\n");
	}
	else{
		printf("%d\n",top->dat);
	}
}
void pop()
{
	struct node* temp;
	temp=top;
	if(top==0)
	{
		printf("Stack is empty\n");
	}
	else{
		printf("%d\n",top->dat);
		top=top->next;
		free(temp);
	}
}
int main()
{
//	display();
	push(5);
	push(6);
	push(7);
	display();
	printf("\nFirst element is\n");
	peek();
	printf("After Poping\n");
	pop();
	pop();
	pop();
	
}
