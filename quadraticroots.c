
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
    float a,b,c,disc,r1,r2,real,imag,i;
    printf("Enter the coefficients of quadratic equation \n");
    scanf("%f%f%f",&a,&b,&c);
    if((a==0) && (b==0) && (c==0))
    {
        printf("enter non zero coefficients\n");
    }
    disc=b*b-(4*a*c);
    if (disc==0)
    {
        printf("the roots are equal\n");
        r1=r2=-b/(2*a);
        printf("the roots are root1=%f root2=%f \n",r1,r2);
    }
    else if (disc>0)
    {
        printf("the roots are real and distinct \n");
        r1=(-b + sqrt(disc))/(2*a);
        r2=(-b - sqrt(disc))/(2*a);
        printf(" the roots are %f and %f \n",r1,r2);
    }
    else
        {
        printf(" Roots are imaginary \n");
        real=-b/(2*a);
        imag=sqrt(fabs(disc))/(2*a);
        printf("the root1=%f+i%f \n",real,imag);
        printf("the root2=%f-i%f \n",real,imag);
        }
        getch();
        return 0;
}