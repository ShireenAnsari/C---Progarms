#include<iostream>
using namespace std;
struct node{
	int dat;
	node* next;
};
node* start=0;
node* current=0;
struct node* createnode()
{
	node* temp;
	temp=new node();
	return temp;
}
void insertnode(int val)
{
	node* t1;
	t1=createnode();
	t1->dat=val;
	t1->next=0;
	if(start==0)
	{
		start=t1;
		current=start;
	}
//	t2=start;
	else
	   {
	   current->next=t1;
	   current=current->next;}
	
}
void traversal()
{
	node* i;
	node* j;
	int temp1;
	for(i=start;i->next!=0;i=i->next)
	{
		for(j=i->next;j!=0;j=j->next)
		 {
		 	if(i->dat>j->dat)
		 	{
			 temp1=i->dat;
			 i->dat=j->dat;
			 j->dat=temp1;
			 }
		 }
	}
	current=start;
	while(current!=0)
	{
		cout<<current->dat;
		current=current->next;
	}
}
void delpos()
{
	node* ptr1;
	node* ptr2;
	int i,pos;
	cout<<"Enter the position you want to delete\n";
	cin>>pos;
	ptr2=start;
	for(i=0;i<pos-1;i++)
	{
		ptr1=ptr2;
		ptr2=ptr2->next;
	}
	ptr1->next=ptr2->next;
	delete(ptr2);
	}
bool search(int val)
{
	current=start;
	while(current!=0)
	{
	
	if(current->dat==val)
{	return true;}
	
	current = current->next;
}
     return false;
}
int main()
{
	int pos,dat;
	insertnode(5);
	insertnode(8);
	insertnode(3);
	insertnode(6);
	insertnode(0);
	cout<<"Before deleting"<<endl;
	traversal();
//	cout<<"\n Enter the first or last position you want to delete\n";
//	cin>>pos;
//	deletenod();
//	cout<<"\n After deleting\n";
//	traversal();
	delpos();
	cout<<"\n After deleting\n";
	traversal();
	cout<<"\n Enter the element you want to search\n";
	cin>>dat;
	cout<<"\n Element found is\t"<<search(dat);
}
