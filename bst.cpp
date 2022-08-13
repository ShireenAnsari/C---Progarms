#include<iostream>
using namespace std;
struct root{
	int data;
	root* left;
	root* right;
};
root* R=0;
void inserttree(root** R,int val)
{
	if(*R==0)
	{
	*R=new root();
		(*R)->data=val;
		(*R)->left=0;
		(*R)->right=0;
	return;
			}
	if(val>(*R)->data)
	  {
	  	inserttree(&(*R)->right,val);
	  }
	else
	  {
	  	inserttree(&(*R)->left,val);
	  }
}
void postorder(root* ptr)
{
	if(R == NULL)
        return;

    //visit the root
    printf("%d ",R->data);

    //traverse the left subtree
    postorder(R->right);

    //traverse the right subtree
    postorder(R->left);
}
void preorder(root* R)
{
	if(R == NULL)
        return;

    //visit the root
    printf("%d ",R->data);

    //traverse the left subtree
    preorder(R->left);

    //traverse the right subtree
    preorder(R->right);
}
void inorder(root* R)
{
if(R==NULL)
   return;
inorder(R->left);
cout<<R->data;
inorder(R->right);	
}
int main()
{
	inserttree(&R,100);
	inserttree(&R,50);
	inserttree(&R,200);
	inserttree(&R,10);
	inserttree(&R,150);
	inserttree(&R,300);
	inserttree(&R,60);
	preorder(R);
	cout<<endl;
	postorder(R);
	cout<<endl;
	inorder(R);
}
