#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
int main()
{
	struct node *p,*preview;
	p=malloc(sizeof(struct node));
	scanf("%d",&p->data);
//	preview=malloc(sizeof(struct node));
//	scanf("%d",&preview->data);
//	preview->next=NULL;
	
	return 0;
	
}

