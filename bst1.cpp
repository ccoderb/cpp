#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;

struct node{
	int data;
	node *l;
	node *r;
}*root;

node* newnode(node *n,int d)
{
	if(n==NULL)
	{
		node *n1=new node;
	
		n1->data=d;
        n1->l=NULL;
        n1->r=NULL;
		return n1;
	}
	else if(d<n->data)
	{
		n->l=newnode((n->l),d);
	 } 
	 else
	 n->r=newnode(n->r,d);
	 return n;
}

void display(node *n)
{
	cout<<"\n. preorder"<<endl;
	cout<<n->data<<endl;
	if(n->l!=NULL)
	display(n->l);
	if(n->r!=NULL)
	display(n->r);
	
	
}

int main()
{
root=newnode(root,1);
root=newnode(root,2);
root=newnode(root,3);
display(root);
}

