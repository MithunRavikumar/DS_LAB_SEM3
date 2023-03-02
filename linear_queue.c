

#include<stdio.h>
#include<stdlib.h>

int rear=-1;
int front=0;
int size=5;
int arr[10];
int item;

void push(int item)
{
    if (rear==size-1)
    {
        printf("stack overflow \n");
        return;
    }

    
    
        rear=rear+1;
        arr[rear]=item;
    
}

void pop()
{
    if(front>rear)
    {
        printf("stack underflow \n");
        return;
    }
    
        item=arr[front++];
        printf("element popped is equal to %d \n",item);
        
    
    
    
}


void display()
{
    if(front>rear)
    {
        printf("stack underflow \n");
        return;
    }

    

        printf("the content of stack are \n");

        for(int i=front ; i<=rear; i++)
        {
            printf("%d \n",arr[i]);
        }

    
    
    
}



void main()
{
    int choice;
    
    
    while(1)
    {
         printf("enter 1.push\n 2.pop\n 3.display\n 4.exit \n");
        printf("enter the choice\t");
         scanf("%d",&choice);
        
        switch(choice)
        {
            
            case 1: printf("enter the item to be inserted\n");
                     scanf("%d",&item);
                     push(item);
                     break;
            
            case 2:  pop();
                     break;

            case 3: display();
                     break;
                    

            case 4:  exit(0);
                     break;
            
            default: printf("invalid choice");
        }
    }
}

        





    



