#include<stdio.h>
#include<complex.h>
#include<math.h>
#define comp complex
void input(int *a ,int *b ,int *c)
{
	printf("Enter a\n");
	scanf("%d",a);
	printf("Enter b\n");
	scanf("%d",b);
	printf("Enter c\n");
	scanf("%d",c);
}
float compute(int a,int b,int c,int *d,float complex *z1,float complex *z2)
{
	float d1;
	*z1=0,*z2=0;
	d1=(b*b)-(4*a*c);
	if(d==0)
	{
		*z1=(-b)/(2*a);
		*z2=*z1;
	}
	else
	{
		*z1=((-b)+(csqrt(d1))/(2*a));
		*z2=((-b)-(csqrt(d1))/(2*a));
	}
	*d=d1;
}
void output(int d,float complex z1,float complex z2)
{
	if(d==0)
	{
		printf("Roots are real and equal \n");
		printf("%.1f",creal(z1));
	}
	if(d>0)
	{
		printf("Roots are different and real\n");
		printf("%.1f and %.1f",creal(z1),creal(z2));
	}
	if(d<0)
	{
		printf("Roots are imaginary \n");
		printf("%.1f+%.1fi\n",creal(z1),cimag(z1));
		printf("%.1f-%.1fi\n",creal(z2),cimag(z2));
	}
}
void main()
{
	int a,b,c,d;float complex z1,z2;
	input(&a,&b,&c);
	compute(a,b,c,&d,&z1,&z2);
	output(d,z1,z2);
}

