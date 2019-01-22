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
float compute(float a,float b,float c,float *d,float sol[],comp *c1)
{
float d1;
*d=sqrt((b*b)-(4*a*c));
d1=*d;
if(d1==0)
{
        sol[0]=(-b)/(2*a);
}
else if(d1>0)
{
        sol[1]=(-b+d1)/(2*a);
        sol[2]=(-b-d1)/(2*a);
}
else if(d1<0)
 {
                printf("The solutions are imaginary\n");
                printf("%f+%f and %f-%f",c1.real,c1.imag,c1.real,c1.imag);
        }
        return 0;
}
void main()
{
        float a,b,c,sol[5],d; comp c1;
        input(&a,&b,&c);
        compute(a,b,c,&d,sol,&c1);
        output(sol,c1,d);
}
                                                                                                                    1,1           Top
