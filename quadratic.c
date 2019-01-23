#include<stdio.h>
#include<math.h>
typedef struct complex
{
        float real;
        float imag;
}comp;
float input(float *a,float *b,float *c)
{
        printf("Enter a\n");
        scanf("%f",a);
        printf("Enter b\n");
        scanf("%f",b);
        printf("Enter c\n");
        scanf("%f",c);
        return 0;
}
float compute(float a,float b,float c,float *d,comp *c1)
{
float d1;
*d=((b*b)-(4*a*c));
d1=*d;
if(d1==0)
{
        c1->real=(-b)/(2*a);
}
else if(d1>0)
{
       c1->real=(-b+sqrt(d1))/(2*a);
       c1->real=(-b-sqrt(d1))/(2*a);
}
else if(d1<0)
{
        c1->real=(b)/(2*a);
        c1->imag=fabs(d1)/(2*a);
}
return 0;
}
float output(comp c1,float d)
{
        if(d==0)
        {
              printf("Solution is real and equal\n");  
              printf("The solution is %f \n",c1.real);
        }
        else if(d>0)
        {
                printf("The solutions are real and distinct\n");
                printf("The solutions are %f and %f \n",c1.real,c1.imag);
        }
        else if(d<0)
        {
                printf("The solutions are imaginary\n");
                printf("%.1f+%.1fi and %.1f-%.1fi",c1.real,c1.imag,c1.real,c1.imag);
        }
        return 0;
}
void main()
{
        float a,b,c,d; comp c1;
        input(&a,&b,&c);
        compute(a,b,c,&d,&c1);
        output(c1,d);
}
