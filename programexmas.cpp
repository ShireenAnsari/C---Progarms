#include<iostream>
using namespace std;
int queu[4];
int qsize=6;
int front=-1;
int rear=-1;
int noelements=0;
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
int main()
{
	enqueu(3);
	enqueu(4);
	enqueu(5);
	cout<<dequeu;
	return 0;
}