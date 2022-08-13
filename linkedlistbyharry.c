#include<stdio.h>
#include<stdlib.h>
struct node
{
	int dat;
	struct node* node;
};
void linkedlisttraversal(struct node* ptr)
{
	while(ptr!=NULL){
	
	printf("Elemet: %d\n",ptr->dat);
	ptr=ptr->node;}
}
int main()
{
	struct node *head;
	struct node *second;
	struct node *third;
	head=(struct node*)malloc(sizeof(struct node));
	second=(struct node*)malloc(sizeof(struct node));
	third=(struct node*)malloc(sizeof(struct node));
	head->dat=7;
	head->node=second;
	second->dat=8;
	second->node=third;
	third->dat=9;
	third->node=NULL;
	
	linkedlisttraversal(head);
	
}
