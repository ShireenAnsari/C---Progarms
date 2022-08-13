#include<iostream>
using namespace std;
int* person=new int[10];
int size=10;
void insert(int val){
	int h=val%10;
	if(h==0){
		person[h]=val;
		return;
	}
	else{
		while(person[h]!=0)
		{
		h=h%10;	
		}
	}
	person[h]=val;}
void printhash()
{
	int i;
	for(i=0;i<10;i++)
	{
		cout<<person[i];
	}
}
bool search(int key){
	int h=key%10;
//	if(person[h]==NULL || person[h]!=key){
//		return false;
//	}
	while(person[h]!=0)
	{
		if(person[h]==key)
		{
			return true;
		}
		h++;
		h=h%10;
	}
	return false;
}
void deletekey(int key){
	int h=key%10;
	while(person[h]!=0)
	{
		if(person[h]==0)
		{
			person[h]=-1;
			return;
		}
		h++;
		h=h%10;
	}
}
int main()
{
	
	for(int i=0;i<10;i++)
	   person[i]=0;
insert(3);
insert(5);	
printhash();
//for(i=0;i<10;i++)
//	   person[i]=0;
}

