#include<stdio.h>
#include<conio.h>
int max=5;
int queu[5];
int top=-1;
void anque(int data)
{
  if(top<=max-1)
  {
  	top++;
  	queu[top]=data;
  }
}
void dequeu()
{
	if(top>=0)
	{
	
	printf("%d",queu[top]);
	}
}
int main()
{
	anque(3);
	anque(4);
	dequeu();
	dequeu();
	
}
