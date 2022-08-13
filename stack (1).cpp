#include<iostream>
using namespace std;
int arr[5];
int size=3;
int top=-1;
void push(int val)
{
	top++;
	arr[top]=val;
}
int pop()
{
	return arr[top--];
}
void traversal()
{
	int i;
	for(i=top;i>=0;i--)
	{
		cout<<arr[i];
	}
}
bool isfull()
{
	return true;
}
bool isempty()
{
	if(top==-1)
	{
	return true;}
}
int main()
{
	int num;
	char choice;
//	if(top<size-1)
//	{
//	push(3);
//	push(4);
//	push(5);
//	push(7);
//	push(8);}
//	traversal();
//	if(top>-1)
//	{
//	
//	cout<<"\n"<<pop();
//	cout<<pop();}
do{
	cout<<"Enter the element you want to push into stack\n";
	cin>>num;
	if(top>size-1)
	{
//		cout<<"Enter the element you want to push into stack\n";
//	    cin>>num;
		cout<<" Stack is full \t"<<isfull();
	}
	else if(top<size-1)
	{
	push(num);
//	top++;
	}
	cout<<"Would you want to continue\n";
	cin>>choice;
}while(choice=='y');
	traversal();
	cout<<"Would you want to pop an element";
	cin>>choice;
	while(choice=='y')
	{
	if(top==-1)
	{
//		cout<<"Enter the element you want to push into stack\n";
//	    cin>>num;
		cout<<" Stack is empty \t"<<isempty();
	}
	else if(top>-1)
	{
	cout<<pop();
//	top++;
	}
		
	}}
	  
