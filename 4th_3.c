//program to find the time taken to sort n random numbers;
#include<stdio.h>
#include<time.h>
int main()
{
    clock_t start,end;
    float time;
    FILE *f;
    FILE *fp;
    f=fopen("in.txt","w");
    int n;
    printf("Enter the number n\n");
    scanf("%d",&n);
    int a[n];
    int j=0;
    for(int i=0;i<n;i++)
    {
        j=rand()%100;
        a[i]=j;
        fprintf(f,"%d ",a[i]);
         //printf("%d ",a[i]);
    }
        printf("\n");
    fp=fopen("out.txt","w");
    int temp=0;
   // int i;
   start=clock();
    for(int j=0;j<=n-1;j++)
    {
        for(int i=j+1;i<=n-1;i++)
        {
        if(a[j]>a[i])
        {
            temp=a[j];
            a[j]=a[i];
            a[i]=temp;
        }
    }
    }
    end=clock();
    time=(float)(end-start)/CLOCKS_PER_SEC;
    fprintf(fp,"Time taken to sort the array is %lf\n",time);
    for(int i=0;i<n;i++)
    {
        fprintf(fp,"%d ",a[i]);
    }
}
