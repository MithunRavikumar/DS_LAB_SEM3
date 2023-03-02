
#include<stdio.h>
#include<conio.h>
int main()
{
    float a,b,c;
    printf("enter any 3 numbers \n");
    scanf("%f%f%f",&a,&b,&c);
    if (a>b)
    {
        if (a>c)
       {

        printf("%f is greatest number \n",a);
       }
       else
       {
           printf("%f is gratest number \n",c);
       }

    }
    else 
    {
        if (b>c)
        {
            printf("%f is gratest number \n",b);
        }
        else
        {
            printf("%f is gratest number \n",c);

        }
    }
    getch();
    return 0;

}