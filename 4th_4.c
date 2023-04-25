//Program to accept elements from file and display them using linked list
#include<stdio.h>
#include<stdlib.h>
struct NODE
{
    int data;
    struct NODE *next;
};
typedef struct NODE *node;
node head;
node getnode(node head,int d)
{
    node newnode;
    newnode=(node)malloc(sizeof(node));
    if(newnode==NULL)
    {
        printf("Memory is not allocated\n");
    }
    else
    {
    newnode->data=d;
    newnode->next=NULL;
    }
    if(head==NULL)
    {
       head=newnode;
       return head;
    }
    else
    {
        node temp;
        temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        return head;
    }
}
void display(node head)
{
    FILE *fp;
    fp=fopen("out.txt","w");
    node temp;
    temp=head;
    while(temp!=NULL)
    {
        fprintf(fp,"%d ",temp->data);
        temp=temp->next;
    }
}
int main()
{
    int i;
    int d=0;
    head=NULL;
    FILE *f;
    f=fopen("in.txt","r");
    i=fscanf(f,"%d",&d);
    while(i!=-1)
    { //printf("%d ",d);
       head=getnode(head,d);
        i=fscanf(f,"%d",&d);
    }
   display(head);

}
