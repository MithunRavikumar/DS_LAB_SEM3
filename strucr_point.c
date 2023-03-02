
#include<stdio.h>

struct student
{
    int rollno;
    
    int marks;
};

void main()
{
    struct student *ptr;
    
    printf("enter roll no of student \t");
    scanf("%d",&(ptr-> rollno));
    
    printf("enter marks of student \t");
    scanf("%d",&(ptr-> marks));
    
    printf(" rollno=%d \n  marks=%d \n",ptr->rollno ,ptr->marks);

}