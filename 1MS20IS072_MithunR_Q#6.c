
#include <stdio.h>
#include <stdlib.h>

typedef struct Student{
    char name[20];
    int marks;
    struct Student * next;
}Student;

Student *head;



Student * create(Student * ptr){


    
    Student * newStudent = (Student *) malloc(sizeof(Student));
    
    printf("Enter details of Students who appeared for test: \n \n");
    printf("Enter student name: \t");
    scanf("%s", newStudent->name);
    printf("Enter student's score(out of 100) in data structures:\t");
    scanf("%d", &newStudent->marks);
    printf("\n");
    newStudent->next = ptr;
    

    return newStudent;
}

void addStart(){
    Student * newStudent = create(head);

    
    head = newStudent;
    printf("***********************************");
    printf("\n");
}

void addEnd(){
    
    Student *ptr = head;
    while(ptr->next != NULL)
        ptr = ptr->next;

    Student * newStudent = create(NULL);
    
    ptr->next = newStudent;
    printf("***********************************");
    printf("\n");
}

void display(int num)
{
    Student *ptr=head;
    int count=0;
    int avg,tot=0;
    
    
    
    
  if(ptr==0)
    {
        printf("No students in list \n \n");
        return;
        
    }

    while(ptr!=0)
    {
        tot= tot + ptr->marks;
        ptr=ptr->next;
        count++; 
    }

    avg = tot/count;
    ptr=head;
    
    printf("TOTAL NUMBER OF STUDENTS WHO APPEARED FOR TEST ARE %d \n ",count);
    printf("\n");

    if(num==1)
    {
        printf("Student who scored above class average %d are \n \n",avg);

        while(ptr!=NULL)
        {
        	
            if((ptr->marks) > avg)
            {
                printf(" Name : %s\t Marks: %d \n",ptr->name,ptr->marks);
                
            }
			ptr=ptr->next;
        }
        printf("\n");
        

    }

    else if(num==2)
    {
        printf("Students who scored below class average %d are \n \n",avg);

        while(ptr!=NULL)
        {
            if((ptr->marks) <= avg)
            {
                printf(" Name : %s\t Marks: %d \n",ptr->name,ptr->marks);
                
            }ptr =ptr->next;
        }
        printf("\n");

    }

    else if(num==3)
    {
        printf("Student who scored full marks are \n \n");

        while(ptr!=NULL)
        {
            if((ptr->marks) ==100)
            {
                printf(" Name : %s\n",ptr->name);
                
            }ptr =ptr->next;
        }
        printf("\n");
        

    }
printf("***********************************");


}

void main()
{
    head=NULL;
    int choice,num;

    while(1)
    {
        printf("Please give student details \n \n");
        printf(" Enter 1 to add Student detail in beginning node \n Enter 2 to add in end node \n Enter 3 to display \n Enter 4 to exit \n \n");
        printf("enter choice \t");
        scanf("%d",&choice);
        printf("\n \n");

        switch (choice)
        {
        case 1:
                addStart();
                break;
        case 2:
                addEnd();
                break;

        case 3:  printf("enter 1 to display students name who got more than class avg \n");
                 printf("enter 2 to display students name who got less than class avg \n");
                 printf("enter 3 to display students name who got more full marks \n");
                 printf("\n");
                 printf("enter choice \t");
                 scanf("%d",&num);
                 printf("\n");
                 if(num==1 || num==2 || num==3)
                 {
                     display(num);
                     
                 }

                 else{
                     printf("invalid choice entered \n");
                 }
                 printf("\n");
                 break;

                 
                     
                 

         case 4: exit(0);
                 break;

        default: printf("invalid choice entered \n \n");



    
        
        
            
        }

    }
}