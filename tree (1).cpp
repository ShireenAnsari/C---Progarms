#include<iostream>
using namespace std;
struct Node{
	int data;
	Node* left;
	Node* right;
};
Node* root=0;
void inserttree(int val,Node** node)
{
	if((*node)==0)
	{
		*node=new Node();
		(*node)->data=val;
		(*node)->left=NULL;
		(*node)->right=NULL;
		return;
	}
	if(val<(*node)->data)
	{
		inserttree(val,&(*node)->left);
	}
	else
	 {
	 	inserttree(val,&(*node)->right);
	 	
	 }
}
void traversalpostorder(Node* ptr)
{
	if(ptr->right!=NULL)
	{
		traversalpostorder(ptr->right);
	}
//	cout<<ptr->;
	if(ptr->left!=NULL)
	{
		traversalpostorder(ptr->left);
	}
	cout<<ptr->data;}
	void traversalpreorder(Node* ptr)
{
	if(ptr->left!=NULL)
	{
		traversalpreorder(ptr->left);
	}
	cout<<ptr->data;
	if(ptr->right!=NULL)
	{
		traversalpreorder(ptr->right);
	}}
//void isfound(Node* ptr,int val)
//{
//	if(ptr==NULL)
//	{
//		cout<<"\nValue not found\n";
//		return;
//	}
//   if(ptr->data==val)
//	{
//		cout<<"\nvalue found\n";
//		return;
//	}
//else if(val<ptr->data){
//		isfound(ptr->left,val);
//	}
//	else
//	   {
//	   isfound(ptr->right,val);}
//}
Node* search(Node* root,int key)
{
	if(root==0)
	{
	  return NULL;}
	if(root->data==key)
	  {
	    return root;}
else if(root->data>key)
       {
	   return search(root->left,key);}
else 
    return search(root->right,key); 
}

void inorder(Node* ptr)
{
if (root != NULL) {
      inorder(root->left);
      cout<<root->data;
      inorder(root->right);
   }
}

int main(){
	inserttree(1,&root);
	inserttree(4,&root);
	inserttree(3,&root);
//	traversalpostorder(root);
//	cout<<endl;
////	isfound(1,root);
//    traversalpreorder(root);
//    cout<<endl;
      inorder(root);
    Node* n;
	n=search(root,6);
    if(n!=NULL)
    {
    cout<<"\nfound: "<<n->data;}
    else 
      cout<<"\nElement not found "<<endl;
	return 0;
	}
