
#include<stdio.h>
void main()
{
 int i,esum=0,osum=0,n;
 printf("enter the number \n");
 scanf("%d",&n);
 for (i=1; i<=n;i++)
 {
     if(i%2==0)
     esum=esum+i;
     else
     osum=osum+i;
 }
 printf("the sum of odd is %d and even is %d",osum,esum);

 }