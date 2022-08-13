#include<iostream>
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
	if(head==NULL)
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
		if(front!=NULL)
		{
			
			cout<<rear->data;
			rear=rear->next;
		}
	}
	void dequeu(int val)
	{
	 rear=front;
	 while(front!=NULL)
	 {
	 	if(val==rear->data)
	 	{
	 		delete rear;
	 		
		 }
	 }
		
	}

int main()
{
	int dat;
	anqueu(7);
	anqueu(6);
	printqueu();
	dequeu(7);
	cout<<"After Dequeu\n";
	printnod();
}
