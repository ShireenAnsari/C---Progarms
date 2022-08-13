#include<iostream>
using namespace std;
struct node{
	int data;
	node* next;
};
void print(node* ptr)
{
	cout<<"Elements are \n";
	while(ptr!=NULL)
	{
		cout<<ptr->data;
		ptr=ptr->next;
	}
}
int main()
{
node *first=new node;
node *Second=new node;
node *Third=new node;
first->data=66;
first->next=second;
Second->data=4;
Second->next=Third
Third->data=3;
Third->next=NULL;
void print(first);
	
}
