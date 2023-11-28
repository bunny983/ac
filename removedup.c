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

void removedup()
{
    struct node*current=head;
    struct node *temp,*dup;
    if(current==NULL)
       return;
    while(current->next!=NULL)
    {
        temp=current;
        while(temp->next!=NULL)
        {
            if(current->data==temp->next->data)
            {
                dup=temp->next;
                temp->next=temp->next->next;
                free(dup);
            }
            else{
                temp=temp->next;
            }
        }
        current=current->next;
    }
}
void printList()
{
    struct node *node;
    node=head;
    while(node!=NULL)
    {
       printf("%d\t",node->data);
       node=node->next;
    }
}
int main()
{
    head=NULL;
    push(30);
    push(20);
    push(30);
    push(10);
    push(20);
    push(30);
    printList();
    printf("\n after removing duplicates:");
    removedup();
    printList();
}
