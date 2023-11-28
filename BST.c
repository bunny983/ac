#include<stdio.h>
struct Node{
	int data;
	struct Node*left;
	struct Node*right;
};

struct Node*newnode(int data)
{
	struct Node*node=(struct Node*)malloc(sizeof(struct Node));
	node->data=data;
	node->left=node->right=NULL;
	return node;
}

void BSTLL(struct Node*root,struct Node**head)
{
	if(root==NULL)
	{
		return;
	}
	   
	BSTLL(root->right,head);
	   root->right=*head;
	if(*head!=NULL)
	  (*head)->left=root;
	*head=root;
	BSTLL(root->left,head);
}
void printList(struct Node*head)
{
	printf("Linked list:\n");
	while(head)
	{
		printf("%d\t",head->data);
		head=head->right;
	}
}
int main()
{
	struct Node*root=newnode(11);
	root->left=newnode(12);
	root->right=newnode(13);
	root->left->left=newnode(14);
	root->left->right=newnode(15);
	root->right->left=newnode(16);
	struct Node*head=NULL;
	BSTLL(root,&head);
	printList(head);
	return 0;
}
