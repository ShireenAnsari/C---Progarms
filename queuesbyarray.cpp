#include<iostream>
using namespace std;
int queu[4];
int qsize=4;
int front=-1;
int rear=-1;
int noelements=0;
void enqueu(int x)
{
	if(noelements==qsize)
	{
		cout<<"Queu is full";
		return;
	}
	if(front==rear==-1)
	{
		front=rear=0;
	}
	rear%=qsize;
	queu[rear++]=x;
	noelements++;
}
int dequeu()
{
	if(noelements==0)
	{
		cout<<"queu is empty"<<endl;
		return 0;
	}
	noelements--;
	front=(front++)%qsize;
	return queu[front++];
}
void printqueu()
{
	for(int i=front;i<rear;i++)
	{
		cout<<queu[i];
	}
}
int main()
{
	enqueu(3);
	enqueu(4);
	enqueu(7);
	enqueu(8);
	enqueu(9);
	cout<<endl;
	printqueu();
	cout<<endl;
	cout<<dequeu()<<endl;
	cout<<dequeu()<<endl;
	cout<<dequeu()<<endl;
	cout<<dequeu()<<endl;
	cout<<dequeu()<<endl;
//	enqueu(6);
//	cout<<dequeu()<<endl;
}
