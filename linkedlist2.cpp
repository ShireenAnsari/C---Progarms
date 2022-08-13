#include<iostream>
using namespace std;
struct node
{
	int data;
	node* next;
	};
	node* head=Null;
	node* current=Null;

//	void printArr(int arr[], int size){
//		
//	}
	void printlinkedlist(){
		current=head;
		while(current!=NULL)
		{
			cout<<current->data;
			current=current->next;
		}
	}
	void insertdeep(int dat){
		if(head==NULL)
		{
			head=new node();
			head->data=dat;
			head->next=NULL;
			return 0;
			
		}
		current=head;
		while(current->next!=NULL)
		{
			current=current->next;
			
		}
		node* link=new node();
		link->data=dat;
		link->next=NULL;
		current->next=new node(*link);
		
	}
	int main()
	{
		int i;
	int arr[]={234,43,6,657,4,5};
	int size=6;
	inserdeep(3);
	printlinkedlist();
//	for(i=0;i<size;i++)	
//	{
//		insertdeep(arr[i],head);
//	}
	
	
	}
	

