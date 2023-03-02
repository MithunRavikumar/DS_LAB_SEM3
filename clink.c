
#include<stdio.h>
#include<stdlib.h>
#define MALLOC(p, n, type)		\
p = (type*)malloc(n*sizeof(type));	\
if(p == NULL)				\
{					\
	printf("Insuficient memory\n");	\
	exit(0);			\
}

struct node{
	int info;
	struct node *link;
};
typedef struct node *NODE;



NODE insert_any(NODE first, int item, int pos){
	NODE temp;
	MALLOC(temp, 1, struct node);
	temp->info = item;
	temp->link = temp
	;
	if(first==NULL&&pos!=1){
		printf("LIST is the empty");
		return first;
	}
	else if(first==NULL&&pos==1){
		return temp;
	}
	else if(pos==1){
		NODE last=first->link;
		while(last->link!=first)
			last=last->link;
		last->link=temp;
		temp->link=first;
		return temp;
	}
	else {
		NODE curr=first;
		NODE prev=NULL;
		int count=1;
		do{
			prev = curr;
			curr = curr->link;
			count++;
		}while(curr!=first&&count!=pos);
		if(pos==count){
			prev->link=temp;
			temp->link=curr;
			return first;
		}
		else{
			printf("Incorrect position\n");
			return first;
		}
	}
}

NODE del_any(NODE first, int pos){
	NODE temp;
	if(first==NULL){
		printf("LIST is the empty");
		return first;
	}
	else if(pos==1){
		if(first==first->link){
			free(first);
			return NULL;
		}
		NODE last=first->link;
		while(last->link!=first)
			last=last->link;
		temp=first->link;
		last->link=temp;
		free(first);
		
		return temp;
	}
	else {
		NODE curr=first;
		NODE prev=NULL;
		int count=1;
		do{
			prev = curr;
			curr = curr->link;
			count++;
		}while(curr!=first&&count!=pos);
		if(pos==count&&curr!=first){
			prev->link=curr->link;
			free(curr);
			return first;
		}
		else{
			printf("Incorrect position\n");
			return first;
		}
	}
}


void display(NODE first)
{
	NODE temp;
	if(first == NULL)
	{
		printf("List is empty\n");
		return;
	}
	printf("The contents of stack list:\n");
	temp = first;
	do
	{
		printf("%d\t", temp->info);
		temp = temp->link;
	}while(temp != first);
	printf("\n");
}

int main()
{
	NODE first =NULL;
	int choice, item,pos,key;
	printf("MENU:\n");
	printf("3.Display\t1.insert at any pos\t4.Exit\n2.delete position\n");
	for(;;)
	{ 

		printf("Enter choice:");
		scanf("%d", &choice);
		switch(choice)
		{
			case 2: printf("Enter pos to be deleted:");
					scanf("%d", &pos); 
					first = del_any(first,pos);
					break;		
			case 3: display(first);
					break;
			case 1: printf("Enter element to be inserted:");
					scanf("%d", &item);
					printf("Enter the position");
					scanf("%d",&pos);
					first = insert_any(first, item, pos);
					break;
			
			case 4: exit(0);
			
			default:printf("Invalid choice\n");
		}
	}
	printf("\n");
}