#include<iostream>
int queu[4];
int qsize=4;
int front=-1,rear=-1;
int noelements=0;
using namespace std;
void enqueu(int val)
{
	if(noelements==qsize){
		cout<<"Queu is full";
		return;
	}
	if(front==-1 && rear==-1)
	{
		front=rear=0;
	}
	rear%=qsize;
	
	queu[rear++]=val;
	noelements++;
}
int dequeu(){
	if(noelements==0)
	{
		cout<<"Queu is empty\n";
		return 0;
	}
	front=(front+1)%qsize;
	noelements--;
	return queu[front++];
}
//noelements--;
void printqueu()
{
	int i;
	for(i=front;i<rear;i++)
	{
		cout<<queu[i]<<" ";
	}
}
int main()
{
enqueu(12);
enqueu(7);
enqueu(3);
enqueu(4);
enqueu(5);
cout<<endl;
printqueu();
cout<<endl;
cout<<dequeu();
//cout<<endl;
cout<<dequeu();
cout<<dequeu();
dequeu();
dequeu();
//printqueu();
//printqueu();	
}
