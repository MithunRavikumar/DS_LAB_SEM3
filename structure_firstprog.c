
#include<stdio.h>

    struct student
    {
        int roll;
        char name[10];
        int marks;
    };
    void main()
    {
    struct student s[5];
    for(int i=0; i<5; i++)
    {
        printf("enter the rollno,name and marks of the student %d respectively\n",i+1);
        scanf("%d %s %d",&s[i].roll,s[i].name,&s[i].marks);
    }
    printf("the details of students are \n");
    for(int i=0; i<5; i++)
    {
        printf("student roll number is %d \n",s[i].roll);
        printf("student name  is %s \n",s[i].name);
        printf("student marks is %d \n",s[i].marks);
        printf("\n");
    }
    }