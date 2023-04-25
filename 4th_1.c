//Program to read array elements from file and display the reversed array elements to another file
#include<stdio.h>
int main()
{
    FILE *f;
    int n=0;
    f=fopen("in.txt","r");
    fscanf(f,"%d",&n);
    int a[n];
    int i;
    int j=0;
    for( i=0;i<n;i++)
    {
        fscanf(f,"%d",&j);
        a[i]=j;
    }
    FILE *fp;
    fp=fopen("out.txt","a");
    for(int k=n-1;k>=0;k--)
    {
        fprintf(fp,"%d ",a[k]);
    }
}
