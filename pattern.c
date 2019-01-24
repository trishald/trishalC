#include<stdio.h>
int input()
{

    int n;
    printf("Enter the number of rows\n");
    scanf("%d",&n);
    return n;
    }
void output(int n)
{
    int row=n,space_num;
    for(int i=1;i<=row;i++)
    {

        space_num=row-i;
        for(int j=1;j<=space_num;j++)
            printf(" ");
        for(int k=1;k<=(2*i)-1;k++)
           {
               printf("*");
           }
            printf("\n");
    }
}
    void main()
    {
    int n;
    n=input();
    output(n);    
    }
