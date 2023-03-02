
#include<stdio.h>
#include<conio.h>
int main()
{
    int m1,m2,m3,m4,m5,m6;
    printf("enter the marks of all 6 subjects \n");
    scanf("%d%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5,&m6);
    if (m1<40 || m2<40 || m3<40 || m4<40 || m5<40 || m6<40)
    {
        printf(" The student has failed \n");
    }
    else 
    {
        printf("The student has passed \n");
        float per=(m1+m2+m3+m4+m5+m6)*100/(600);
        printf("the percentage of student is %f \n",per);
    if (per>=90 && per<=100)
    {
        printf("the student has obtained S grade");
    }
    else if (per>=80 && per<90)
    {
        printf(" the student has obtained A grade");

    }
    else if(per>=70 && per<80)
    {
        printf(" the student has obtained B grade");
    }
    else if(per>=60 && per<70)
    {
        printf("the student has obtained C grade");
    }
    else if(per>=50 && per<60)
    {
        printf(" the student has obtained D grade");
    }
    else if(per>=40 && per<50)
    {
        printf(" the student has obtained E grade");
    }
    }
    getch();
    return 0;
}