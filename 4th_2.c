//Program to generate a file which stores random numbers
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    FILE *f;
    int j=0;
    int a[n];
    f=fopen("input.txt","a");
    for(int i=0;i<n;i++)
    {
        j=rand()%100;
        a[i]=j;
        fprintf(f,"%d ",a[i]);
    }

}
