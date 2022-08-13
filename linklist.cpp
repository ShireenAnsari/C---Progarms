#include<iostream>
using namespace std;
struct node
{
int data;
node* next;	
};
node* head=NULL;
node* current=NULL;
void insertdeep(int dat){
	if(head==NULL){
		head=new node;
		head->data=dat;
		head->next=NULL;
		return;
	}
	current=head;
	while(current->next != NULL){
		current=current->next;
	}
	node* link=new node;
	link->data=dat;
	link->next=NULL;
	current->next=link;
	
}
void printlinkedlist(){
current=head;
while(current!=NULL)
{
cout<<current->data<<endl;
current=current->next;	
	}	
}
int search(int key){
	current=head;
	while(current!=NULL)
	{
		if(current->data==key)
		{
			return 1;
		}
	current = current->next;
}
     return 0;
}
//void del(int val)
//{
//	node* temp;
//	node* prevnode;
//	if(head==NULL)
//	{
//		return ;
//	}
//	//remove first node
//	if(head->data==val){
//		temp=head;
//		head=head->next;
//		delete temp;
//		
//		}
//		prevnode=head;
////		removing node from value
//		current=head->next;
//		while(current!=NULL)
//		{
//			if(current->data==val){
//				prevnode->next=current->next;
//				delete current;
//				return;
//			}
//				prevnode=current;
//		current=current->next;
//		}
//}
void removenodewithposition(int pos){
//	linked list empty
node* temp;
node* prevnode;
	if(head==NULL){
		return;
	}
	temp=head;
	//for starting node remove
	if(pos==0){
	  head=head->next;
	  delete temp;
	  return;
	  
	}
	current=head->next;
	while(pos!=1){
		prevnode=current;
		current=current->next;
		pos--;		
}
prevnode->next=current->next;
delete current;	
}
int main()
{
//	int arr[]={234,43,6,657,3,5};
//	int size=6;
	int key;
	insertdeep(3);
	insertdeep(9);
	insertdeep(10);
	printlinkedlist();
	void travarsing();
	cout<<"Enter any key "<<endl;
	cin>>key;
	cout<<search(key)<<endl;
//	removenodewithposition(0);
	del(2);
	cout<<"After removing\n";
	printlinkedlist();	
return 0;	
	
}

