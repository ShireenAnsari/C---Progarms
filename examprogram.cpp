#include<iostream>
using namespace std;
int persons[6];
int size=6;
void insert(int val)
{
	int h=val%10;
	if(h==0)
	{
		persons[h]=val;
	}
	else{
	
	  while(persons[h]!=0)
	  {
	  	h++;
	  	h=h%10;
	  }
	  persons[h]=val;
}
}
bool search(int key)
{
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
	int h=h%10;
	while(persons[h]!=0)
	{
		if(persons[h]==key)
		{
			persons[h]=-1;
		}
		h++;
		h=h%10;
	}
}
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
	insert(4);
	insert(5);
	insert(7);
	insert(0);
	traversal();
	cout<<"\nEnter any key\n";
	cin>>key;
	cout<<search(key);
	deletekey(3);
	cout<<"\nAfter deleting\n";
	traversal();
}
