
#include<stdio.h>
#include<conio.h>
int main()
{
    int year;
    printf("Enter the year \n");
    scanf("%d",&year);
    if ((year%4==0)&&(year%100!=0)||(year%400==0))
    {
        printf(" the year is a leap year\n");
    }
    else
    {
        printf("the year is not a leap year");
    }
    getch();
    return 0;

}