
#include<stdio.h>

void swap(int *x, int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    
}

void main()
{
    int a,b;
    printf("enter 2 numbers \n");
    scanf("%d %d",&a,&b);
    printf("number before swapping is a=%d and b=%d \n",a,b);


    swap(&a,&b);
    printf("number after swapping is a=%d and b=%d \n",a,b);

}
