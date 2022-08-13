#include<iostream>
using namespace std;
#include<conio.h>
class stack
{
	private:
		int size;
		int* arr;
		int current=-1;
	public:
		stack()
		{
			size=5;
			arr=new int[size];	
		}
	    stack(int len)
	    {
	    	size=len;
	    	arr=new int[size];
		}
		public:
		void push(int val)
		{
			if(current<size)
			{
				arr[++current]=val;
			}
		}
			
			int pop()
			{
			if(current>-1)
			{
				return arr[current--];
							}
			else
			   return -1;				
			}
};
int main()

{
	stack s1;
s1.push(3);
s1.push(6);
s1.push(7);
cout<<s1.pop()<<endl;
cout<<s1.pop()<<endl;
cout<<s1.pop()<<endl;
cout<<s1.pop();
return 0;
}
