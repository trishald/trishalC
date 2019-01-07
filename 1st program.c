#include<stdio.h>
int input()
{
int a;
printf("Enter the number \n");
scanf("%d",&a);
return a;
}
int compute(int x)
{
 x=x+1;
return x;
}
int output(int m,int n)
{
printf("%d+1 is %d",m,n);
return 0;
}
int main()
{
int a,b;
a=input();
b=compute(a);
output(a,b);
return 0;
}

