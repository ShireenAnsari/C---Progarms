#include<iostream>
using namespace std;
struct node{
	int data;
	node* next;
};
node* head;
void push(int x)
{
	node* temp;
	temp=new node();
	temp->data=x;
	temp->next=head;
	head=temp;
}
void traversal()
{
	while(head!=NULL)
	{
		cout<<head->data;
		head=head->next;
	}
}
int pop()
{
	int x;
	x=head->data;
	node* p=head;
	head=head->next;
	delete p;
	return x;
}
int isempty()
{
		return head==NULL;}
int main()
{
	push(4);
	push(3);
//	traversal();
	cout<<pop();
	cout<<pop();
	isempty();
	
}
