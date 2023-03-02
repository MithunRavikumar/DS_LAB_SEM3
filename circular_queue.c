
#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
void insert();
void delete();
void display();
int a[SIZE];
int front=-1;
int rear=-1;
int element;

int main()
{
    int choice;
    
    while(1)
    {
        printf("\n circular queue menu \n");
        printf(" 1.insert \n 2.delete\n 3.display\n 4.exit\n");
        printf("enter your choice \t");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: insert();
            break;

            case 2: delete();
            break;
            
            case 3: display();
            break;

            case 4: exit(0);
            default: printf("invalid choice \n");
        }

    }

}

void insert()
{
    

    if((front==0 && rear==SIZE-1)||(front==rear+1))
    printf("circular q is full\n");
    else
    {
        printf("enter the value to be inserted \n");
        scanf("%d",&element);
        
        if(rear==SIZE-1 && front!=0)
        rear=-1;
        a[++rear]=element;
        printf(" inserted %d successfully \n", a[rear]);

        if(front==-1)
        front=0;
    }
}

void delete()
{
    if(front==-1 && rear==-1)
    printf("circular q is empty \n");

    
    else{
    
        element=a[front++];
        printf("deleted element is %d \n",element);

        if(front-1==rear)
        front=rear=-1;

    

        if(front==SIZE)
    {
        front=0;
        
    }

    
    }

    
}

void display()
{
    if(front==-1 && rear==-1)
    printf("circular q is empty \n");
    else
    {
        int i;
        printf("circ q elements are:\n");
        if (front<=rear)
        {
            for(i=front; i<=rear; i++)
            printf("%d \t",a[i]);
        }

        else
        {
            for(i=0; i<=rear; i++)
          printf("%d \t",a[i]);

          for(i=front; i<=SIZE-1; i++)
          printf("%d \t",a[i]);


           
        }
    }
}