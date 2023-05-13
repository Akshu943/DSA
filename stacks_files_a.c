//Push and Pop operations of stack
#include<stdio.h>
#include<stdlib.h>
#define MAX 50
int stack[MAX];
   int top=-1;
void push(FILE *s, FILE *pu,int item)
{
    if(top==MAX-1)
    {
        printf("Stack overflow\n");
    }
    else
    {
        top++;
        stack[top]=item;
        for(int i=0;i<=top;i++)
        {
        fprintf(s,"%d ",stack[i]);
        }
        fprintf(pu,"%d ",item);
    }
    return;
}
void pop(FILE *s,FILE *po)
{
    int k;
    k=stack[top];
    top--;
    for(int i=0;i<=top;i++)
        {
        fprintf(s,"%d ",stack[i]);
        }
    if(top==-1)
    {
        printf("Stack underflow\n");
    }
    else
    {
        fprintf(po,"%d ",k);
    }
    return;
}
int main()
{

    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    int j=0;
   FILE *f=fopen("in.txt","a");
    for(int i=0;i<n;i++)
    {
        j=rand()%100;
        fprintf(f,"%d ",j);
    }
    fclose(f);
    int item;
     f=fopen("in.txt","r");
     FILE *s=fopen("stack.txt","a");
   for( ; ; )
   {
        int k;
    printf("Enter 1 to push\n2 to pop\n3 to exit\n");
    scanf("%d",&k);
    if(k==1)
    {

        FILE *s=fopen("stack.txt","w");
        FILE *pu=fopen("push.txt","a");
        fscanf(f,"%d",&item);
        push(s,pu,item);
        fclose(s);
        fclose(pu);
    }
    else if(k==2)
    {
        FILE *po=fopen("pop.txt","a");
        FILE *s=fopen("stack.txt","w");
        pop(s,po);
        fclose(s);
        fclose(po);
    }
    else
    {
        exit(0);
    }
   }
}
