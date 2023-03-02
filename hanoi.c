
#include<stdio.h>

void hanoi(int n, char a ,char b, char c )
{
    if(n>0)
    {
    hanoi(n-1,a,c,b);
     printf("move the %d disc from %c to %c \n",n,a,c);
     hanoi(n-1,b,a,c);
    }
}

int main()
{
    int n;
    
    printf("enter the no disc u want to place \n");
    scanf("%d",&n);
    hanoi(n,'A','B','C');
    return 0;
}



