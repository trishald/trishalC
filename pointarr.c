#include<stdio.h>
int input(int a[],int *n)
{
        int lim,i;
        printf("Enter the limit\n");
        scanf("%d",&lim);
        printf("Enter the array elements \n");
        for(i=0;i<lim;i++)
                scanf("%d",&a[i]);
        *n=lim;

}
int compute(int a[],int n)
{
        int sum=0,i;
        for(i=0;i<n;i++)
        sum=sum+a[i];
        return sum;
}
int output(int n,int sum)
{
        printf("The sum of %d numbers is %d",n,sum);
}
void main()
{
        int a[100],n,sum;
        input(a,&n);
        sum=compute(a,n);
        output(n,sum);

}

