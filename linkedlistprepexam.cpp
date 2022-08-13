#include<iostream>
using namespace std;
struct node{
	int data;
	node* link;
};
node* head=0;
node* current=0;
node* creatnode()
{
	node* temp;
	temp=new node();
	return temp;
}
void insertnode(int val)
{
	node* t1;
	t1=creatnode();
	t1->data=val;
	t1->link=NULL;
	if(head==NULL)
	{
		head=t1;
		current=t1;
	}
	else {
		current->link=t1;
		current=current->link;
	}
}
void traversal()
{
	current=head;
	while(current!=NULL)
	{
		cout<<current->data;
		current=current->link;
	}
}
void deletenode1()
{
	node* temp;
	temp=head;
	head=head->link;
	delete(temp);
	
}
void deletelast()
{
	node* t1;
	node* t2;
	t1=head;
	while(t1->link!=0)
	{
		t2=t1;
		t1=t1->link;
		
	}
	t2->link=t1->link;
	delete(t1);
	
}
void deletepos()
{
	int pos;
	node* t1;
	node* t2;
//	t2=head;
	cout<<"Enter the position You want to delete\n";
    cin>>pos;
    	t2=head;
	for(int i=0;i<pos-1;i++)
	{
		t1=t2;
		t2=t2->link;
	}
	t1->link=t2->link;
	delete(t2);
}
bool search(int val)
{
	current=head;
	while(current!=0)
	{
		if(current->data==val)
		  return true;
		  current=current->link;
	}
	return false;
}
void traversalsort()
{
	node* i;
	node* j;
	int temp;
	for(i=head;i!=0;i=i->link)
	{
		for(j=i->link;j!=0;j=j->link)
		{
			if(i->data>j->data)
			{
				temp=i->data;
				i->data=j->data;
				j->data=temp;
			}
		}
	}
	current=head;
	while(current!=0)
	{
		cout<<current->data;
		current=current->link;
	}
}
int main()
{
	int pos;
insertnode(3);
insertnode(4);
insertnode(7);
insertnode(5);
insertnode(6);
traversal();
cout<<endl;
deletenode1();
cout<<endl<<"After deleting from first we have\n";
traversal();
deletelast();
cout<<endl<<"After deleting from last we have\n";
traversal();
cout<<endl;
//cout<<"Enter the position You want to delete\n";
//cin>>pos;
deletepos();
cout<<"After deleting\n";
traversal();	
//search(5);
cout<<"Value found is "<<search(6);
cout<<"\nTraversal sort is\n";
traversalsort();
}