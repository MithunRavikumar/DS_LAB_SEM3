
#include<stdio.h>
#include<stdlib.h>
#define MALLOC(p, n, type)		\
p = (type*)malloc(n*sizeof(type));	\
if(p == NULL)				\
{					\
	printf("Insuficient memory\n");	\
	exit(0);			\
}					
struct node
{	
	int info;
	struct node *rlink,*llink;
};
typedef struct node *NODE;

NODE insert_front(int item, NODE first)
{
	NODE temp;
	MALLOC(temp, 1, struct node);
	temp->info = item;
	temp->rlink = temp->llink=NULL;
	if(first==NULL)
		return temp;
	NODE prev=NULL, cur=first;
	while(cur!=NULL){
		prev=cur;
		if(first->info>item)
			cur=cur->llink;
		else
			cur=cur->rlink;
	}
	
	if(prev->info>item)
		prev->llink=temp;
	else if (prev->info<item) 
		prev->rlink=temp;
	else
		return first;
		
	
	return first;
}
NODE fmi(NODE root){
	NODE m=root;
	if(root == NULL)
	{
		printf("List is empty\n");
		return root;
	}
	while (m->llink != NULL) {
    	m = m->llink;
  	}
  	return m;
}

NODE delete(NODE root, int d)
{
	NODE temp;
	if(root == NULL)
	{
		printf("List is empty\n");
		return root;
	}
	else if(d>root->info)
		root->rlink=delete(root->rlink,d);
	else if(d<root->info)
		root->llink=delete(root->llink,d);
	else {
		if(root->llink==NULL&&root->rlink==NULL){
			free(root);
			root= NULL;
		}
		else if(root->llink==NULL){
			temp=root;
			root=root->rlink;
			free(temp);
		}else if(root->rlink==NULL){
			temp=root;
			root=root->llink;
			free(temp);
		}else{
			temp=fmi(root->rlink);
			root->info=temp->info;
			root->rlink=delete(root->rlink,temp->info);
		}
		
	}
	return root;
}

void display(NODE root)
{
	NODE temp;
	if(root == NULL)
	{
		
		return;
	}
	
	
	
	display(root->llink);
    printf("%d-",root->info);
	display(root->rlink);
}

int main()
{
	NODE first =NULL;
	int choice, item, d;
	printf("MENU:\n");
	printf("1.Insert \t2.Delete key\n3.Display(inorder)\t4.Exit\n");
	for(;;)
	{ 

		printf("Enter choice:");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1: printf("Enter element to be inserted:");
				scanf("%d", &item);
				first = insert_front(item, first);
				break;
			case 2: 
					printf("enter the key: ");
					scanf("%d",&d);
					first = delete(first,d);
				break;
			case 3: display(first);
					printf("\n");
				break;
			case 4: exit(0);
			default: printf("Invalid choice\n");
		}
	}
	printf("\n");
}