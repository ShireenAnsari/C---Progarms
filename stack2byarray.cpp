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
//	head=head->next;
	
}
int pop()
{
	int x;
	x=head->data;
	node* ptr;
	ptr=head;
	head=head->next;
	delete(ptr);
	return x;
}
int main()
{
	push(3);
	push(4);
	push(5);
	cout<<pop()<<endl;
}
