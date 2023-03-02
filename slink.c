
#include<stdio.h>
#include<stdlib.h>
#define MALLOC(p)\
	p=(struct node *)malloc(sizeof(struct node));\
	if(p==NULL){\
		exit(0);\
	}

typedef struct node{
	int info;
	struct node* link;
}* NODE;

NODE insert_any(NODE first,int item,int pos){
	NODE temp;
	MALLOC(temp);
	temp->info=item;
	temp->link=NULL;
	if(first==NULL&&pos!=1){
		printf("Empty\n");
		return first;
	}else if(pos==1){
		temp->link=first;
		return temp;
	}else{
		NODE prev=NULL,cur=first;
		int count=1;
		while(cur!=NULL&count!=pos){
			prev=cur;
			cur=cur->link;
			count++;
		}
		if(count==pos){
			prev->link=temp;
			temp->link=cur;
		}else{
			printf("Incorrect position\n");
		}
		return first;
	}
}

NODE del(NODE first,int pos){
	NODE temp;
	if(first==NULL){
		printf("Empty\n");
		return first;
	}
	else if(pos==1){
		temp=first->link;
		free(first);
		return temp;
	}else{
		NODE prev=NULL,cur=first;
		int count=1;
		while(cur!=NULL&&count<pos){
			prev=cur;
			cur=cur->link;
			count++;
			//printf("---->%d %d\n",count,cur);
		}
		if(count==pos&&cur!=NULL){
			//printf("---->%d %d\n",count,cur);
			if(cur->link!=NULL)
				prev->link=cur->link;
			else
				prev->link=NULL;
			free(cur);
		}else{
			printf("Incorrect position\n");
		}
		return first;
	}
}

void display(NODE first){
	NODE cur=first;
	if(first==NULL){
		printf("Empty\n");
		return;
	}
	printf("Contents:\n");
	while(cur!=NULL){
		printf("%d ",cur->info);
		cur=cur->link;
	}
}

void main(){
	int n,item,pos;
	NODE first=NULL;
	printf("Menu:\n1.Insert\n2.del\n3.display\n4.exit\n");
	while(1){
		printf("Enter your choice\n");
		scanf("%d",&n);
		switch(n){
			case 1: printf("Enter the element");
					scanf("%d",&item);
					printf("Enter the position");
					scanf("%d",&pos);
					first=insert_any(first,item,pos);
					break;
			case 2: 
					printf("Enter the position");
					scanf("%d",&pos);
					first=del(first,pos);
					break;
			case 3:
					display(first);
					break;
			case 4: exit(0);
			default:printf("Incorrect choice");
		}
	}
}