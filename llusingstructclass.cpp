#include<iostream>
using namespace std;
struct node
{
	int data;
	node* next;
	
};
class linked_list
{
	private:
		node* head;
		node* tail;
	public:
		linked_list()
		{
			head=0;
			tail=0;
		}
	void add_node(int n)
	{
		node* temp=new node;
		temp->data=n;
		temp->next=0;
	if(head==0)
	{
		head=temp;
		tail=temp;
	}
	else
	{
		tail->next=temp;
		tail=tail->next;
	}
	}
};
int main()
{
	linked_list a;
	a.add_node(3);
	a.add_node(4);
	return 0;
}
