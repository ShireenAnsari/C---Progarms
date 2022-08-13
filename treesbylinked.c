#include<stdio.h>
#include<malloc.h>
struct node{
	int data;
	struct node* left;
	struct node* right;
};
struct node* constructnode(int data)
{
struct node* p; //creating a node pointer
p->data=6;
p=(struct node*)malloc(sizeof(struct node)); //allocating the memory
p->left=NULL; //setting left and right node to null
p->right=NULL;	
return p; //finally returning
}
int main()
{
////	constructing the rout node
//struct node* p;
//p->data=6;
//p=(struct node*)malloc(sizeof(struct node));
//p->left=NULL;
//p->right=NULL;
//struct node* p1;
//p1->data=3;
////constructing the second node
//p1=(struct node*)malloc(sizeof(struct node));
//p1->left=NULL;
//p1->right=NULL;
////constructing the third node
//struct node* p2;
//p2->data=7;
//p2=(struct node*)malloc(sizeof(struct node));
//p2->left=NULL;
//p2->right=NULL;
////Linking the root node with left and right childeren
//p->left=p1;
//p->right=p2;
///	constructing the rout node
struct node* p=constructnode(3);
struct node* p2=constructnode(6);
struct node* p3=constructnode(7);
p->left=p2;
p->right=p3;


return 0;	
}
