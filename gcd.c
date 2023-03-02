
#include<stdio.h>
int gcd(int ,int);

void main()
{
    int a,b;
    printf("enter 2 numbers \n");
    scanf("%d %d",&a,&b);
    printf("the gcd of %d and %d is %d \n",a,b,gcd(a,b));


}

int gcd(int a,int b)
{
    if(b==0)
    {
        return a;
    }

     gcd(b,a%b);
}