#include<iostream>
using namespace std;
struct node
{
	int data;
	node* next ;
};
//node* head=0;
//node* newnode=new node;
//node* current=0;  //for traversing node
//int 0;
////head=0;
////newnode=new node;
int main()
{
	//head=0;
//newnode=new node;
node* head=0;
node* current;  //for traversing node
int choice;
while(choice!=0){

node* newnode=new node;

	cout<<"Enter data\n";
	cin>>newnode->data;
	newnode->next=0;
	if(head==0)
	{
		head=newnode=current;
	}
	else
	{
		current->next=newnode;
		current=newnode;
	}
	cout<<"Do You want to continue"<<endl;
	cin>>choice;}
	current=head;
	while(current!=0)
	{
		cout<<current->data;
		current=current->next;
	}
	return 0;
	
	
	
}


