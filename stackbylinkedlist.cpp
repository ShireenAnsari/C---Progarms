#include<stdio.h>
#include<stdlib.h>
struct stack
{
	int *arr;
	int size;
	int top=-1;
	
};
//stack *s;
//s->size=5;
//s->top=-1;
//s->arr=new int(s1->size)
//void push(int data)
//{
//	if(s->top<s->size)
//	{
//		s->arr[++s->top]=data;
//	}
//	
//}
//int pop()
//{
//	
//		
//	if(s->top>-1)
//	{
//		return  s->arr[s->top--];
//		
//	}
//	  else
//	      return -1;	
//}
int isempty(struct stack* s)
{
	 if(s->top==-1)
	   {
		 return 1;}
	 else{
	 	return 0;
	 }	
}
isfull(struct stack* s){
	if(s->top==s->size-1)
	   {
		 return 1;}
	 else{
	 	return 0;
	 }	
}
int main()
{
//	struct stack s;
//	s.size=80;
//	s.top=-1;
//	s.arr=(int*)malloc(s.size*sizeof(int));
//	return 0;
struct stack *s;
	s->size=80;
	s->top=-1;
	s=(struct stack*)malloc(sizeof(struct stack));
	s->arr[0]=5;
	s->top++;
	if(isempty(s))
	{
		printf("Stack is empty\n");
	}
	else
	  printf("Stack is not empty");
	return 0;
	
}
