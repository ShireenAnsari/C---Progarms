#include<iostream>
using namespace std;
struct node{
	int data;
	node* next;
};
node* front=0;
node* rear=0;
void enqueue ( int value )
{
 node *ptr = new node();
 ptr->data= value;
 ptr->next = NULL;

 //If inserting the first element/node
 if( front == NULL )
 {
  front = ptr;
  rear = ptr;
 }
 else
 {
  rear ->next = ptr;
  rear = ptr;
 }
}
int dequeu()
{
 int x=front->data;
 node* ptr;
 ptr=front;
 front=front->next;
 delete ptr;
 return x;
}
int frontnum()
{
	int x=front->data;
	return x;
}
//bool isempty()
//{
//	if(front==NULL&& rear==NULL)
//	{
//		return true;
//	}
//	else
//	  return false;
//}
int isempty()
{
	return front==NULL;
}
int main()
{
	enqueue(3);
	enqueue(4);
	enqueue(5);
	cout<<"Front element is "<<frontnum()<<endl;
	cout<<dequeu()<<endl;
	cout<<dequeu()<<endl;
	cout<<dequeu()<<endl;
//	cout<<frontnum();
	
}
