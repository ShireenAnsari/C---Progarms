#include<iostream>
using namespace std;
struct node{
	int data;
	node* next;
};
node* head=NULL;
node* current=NULL;
void insertnode(int dat)
{
	if(head==NULL)
	{
		node* temp;
		temp=new node();
		temp->data=dat;
		temp->next=NULL;
		head=temp;
		return;
	}
	current=head;
	while(current!=NULL)
	{
		current=current->next;
	}
	node* link=new node;
	link->data=dat;
	link->next=NULL;
	current->next=new node(*link);
	
}
//void deletenode()
//{
//	
//}
//void display()
//{
//	
//}
int main()
{
	insertnode(3);
	insertnode(5);
	return 0;
	
	
}
