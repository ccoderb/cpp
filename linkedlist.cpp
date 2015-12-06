#include<iostream>
using namespace std;

struct node
{
	int data;
	node *next;
};


node* reverse(node *root)
{
	node *current,*next, *prev= NULL;
	
	current=root;
	if(current==NULL)
	return root;
	
	

	
	while(current!=NULL)
	{
		next=current->next;
		current->next=prev;
		prev=current;
		current=next;
				
		
		}
root=prev;
return root;
}
int push(node *r,int d)
 {
    node*newnode=new node;
   while(r->next!=NULL)
   {
   	r=r->next;
   }
   r->next=newnode;
   newnode->next=NULL;
   newnode->data=d;
 }
void traverse(node *root)
{
node* conductor = new node;
conductor=root;

while(conductor!=0)
 {
 	cout<<"node \t"<<conductor->data;
	conductor=conductor->next;
	
 } 
}

int main()
{
	int d1;
	cout<<"Enter 1st element in linked list";
	cin>>d1;
	node *root = new node;
	root->data=d1;
	root->next=0;
	
	push(root,40);
	push(root,41);
	cout<<"\nlinked list is\n";
	traverse(root);
	
	cout<<endl<<"reversed linked list is \t\n";
	root=reverse(root);
	traverse(root);
	return 0;
}
