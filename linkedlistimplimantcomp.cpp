#include<iostream>
using namespace std;
struct node{
	int data;
	node* next;
};
head=NULL;
node* creatnod()
{
	node* temp;
	temp=new node;
	return temp;
}
void insertnode(int val)
{
	node* t1;
	t1=creatnod();
	t1->data=val;
	t1->next=NULL;
	
}
