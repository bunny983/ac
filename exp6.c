#include<stdio.h>
struct node{
    int data;
    struct node*next;
};
struct node*head;

void push(int newdata)
{
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=newdata;
    if(head==NULL)
    {
        head=newnode;
        newnode->next=NULL;
    }
    else{
        newnode->next=head;
        head=newnode;
    }
}
struct node*modularnode(int k)
{
	if(k<=0||head==NULL)
	{
		return NULL;
	}
	struct node *temp=head,*mod=NULL;
	int i=1;
	while(temp!=NULL)
	{
		if(i%k==0)
		  mod=temp;
		i++;
		temp=temp->next;
	}
	return mod;
}
int main()
{
    head=NULL;
    push(11);
    push(12);
    push(13);
    push(14);
    push(15);
    push(16);
    push(17);
    struct node*mod_node=modularnode(2);
    if(mod_node!=NULL)
         printf("Modular node:%d",mod_node->data);
    else
         printf("NULL");
    return 0;
}
