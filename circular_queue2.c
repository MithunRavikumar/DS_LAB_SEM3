#include<stdio.h>
#include<stdlib.h>
#define SIZE 4
int count=0;
int front = 0;
int rear = -1;
int q[10];
int item;

void insert()
    {
        if(count==SIZE)
            {
                printf("Oberflow\n");
                return;
            }
            rear = (rear+1)%SIZE;
            q[rear] = item;
            count++;
            
}
void delete()
    {
        if(count==-1)
            {
                printf("underflow\n");
                return;
            }
        else
            {
                item = q[front];
                front=(front+1)%SIZE;
                count=count-1;
            }
    }
void display()
    {
    	int i,d;
        if(count==0)
            {
                printf("eMPTY\n");
                return;
            }
        d=front;
        for( i=1;i<=count;i++)
            {
                printf("%d\n",q[d]);
                d = (d+1)%SIZE;
            }
    }
void main()
    {
        int choice;
        printf("1:Insert   2:Delete\n");
        printf("3:Display  4:Exit\n");
        for(;;)
            {
                printf("Enter the choice\n");
                scanf("%d",&choice);
                switch(choice)
                    {
                        case 1:printf("Enter the item to be inserted\n");
                                scanf("%d",&item);
                                insert();break;
                        case 2:delete();
                                printf("Item dleted is %d",q[front]);
                                break;
                        case 3:display();break;
                        case 4:exit(0);break;
                        default:printf("Enter a valid vhoiec\n");
                    }
            }
    }