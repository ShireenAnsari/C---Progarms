#include<iostream>
using namespace std;
struct node
{
	int data;
	node* next;
};
node* head=NULL;
node* tail=NULL;
void insertdata(int dat)
{
	node* temp=new node;
	temp->data=dat;
	temp->next=NULL;
	if(head==NULL)
	{
		head=temp;
		tail=temp;
	}
	else
	{
		tail->next=temp;
		tail=tail->next;
		
	}}
	void printnod()
	{
		tail=head;
		if(head!=NULL)
		{
			
			cout<<tail->data;
			tail=tail->next;
		}
	}
	void deletenod(int val)
	{
	 tail=head;
	 while(head!=NULL)
	 {
	 	if(val==tail->data)
	 	{
	 		delete tail;
	 		
		 }
	 }
		
	}

int main()
{
	int dat;
	insertdata(7);
	insertdata(6);
	printnod();
	deletenod(7);
	cout<<"After Removing\n";
	printnod();
}
