#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
	int data;
	node* next;
};
node* front=NULL;
node* rear=NULL;
void anqueu(int dat)
{
	node* temp=new node;
	temp->data=dat;
	temp->next=NULL;
	if(front==NULL)
	{
		front=temp;
		rear=temp;
	}
	else
	{
		rear->next=temp;
		rear=rear->next;
		
	}}
	void printqueu()
	{
		rear=front;
		while(front!=NULL)
		{
			
			cout<<rear->data<<endl;
			rear=rear->next;
		}
	}
void dequeu()
	{
		if(front==NULL)
		{
			cout<<"Queu is empty";
		}
		else{
		
		node* temp;
		temp=front;
		front=front->next;
		cout<<"Dequeued element is "<<temp->data<<endl;
		free(temp);}
	}
int frontval()
{
return front->data;
}
int isempty()
{
return ( front == NULL );
}
int main()
{
	cout<<"Empty is : "<<isempty()<<endl;
	anqueu(7);
	anqueu(6);
	anqueu(9);
	cout<<"Empty is : "<<isempty()<<endl;
	cout<<"Front element is :\t"<<frontval()<<endl;
//	cout<<"Total queus are\n";
//	printqueu();
	dequeu();
	dequeu();
	dequeu();
//	cout<<"Front element is :\t"<<frontval();
	
}
