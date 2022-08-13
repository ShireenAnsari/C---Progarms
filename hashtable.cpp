#include<iostream>
using namespace std;
int persons[6];
int size=6;
//int noelements;
void insert(int val){
int h=val%10;
if(h==0)
	{
	persons[h]=val;
	return;
	}
	else{
		while(persons[h]!=0)
		{
			h++;
			h=h%10;
//			persons[h]=val;
//         noelements=noelements++;
		}
		persons[h]=val;
	}
}
bool search(int key){
	int h=key%10;
	while(persons[h]!=0)
	{
		if(persons[h]==key)
		{
			return true;
		}
		h++;
		h=h%10;
	}
	return false;
}
void deletekey(int key)
{
	int h=key%10;
	while(persons[h]!=0)
	{
		if(persons[h]==key){
			persons[h]=-1;
			return;
		}
		
		h++;
		h=h+10;
}}
void traversal()
{
	for(int i=0;i<size;i++)
	{
	  cout<<persons[i];
	}
	
}
int main()
{
int key;
//	for(int i=0;i<noelements;i++)
//	{
//		persons[i]==0;
//		cout<<persons[i];
//	}
insert(3);
insert(4);
insert(5);
traversal();	
cout<<"\n Enter any key\n";
cin>>key;
cout<<search(key);
deletekey(5);
cout<<"\nAfter Deleting\n";
traversal();

}

