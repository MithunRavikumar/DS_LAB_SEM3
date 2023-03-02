
#include<stdio.h>
#include<stdlib.h>
#define MALLOC(p,n,type)\
p=(struct node*)malloc(sizeof(type));\
if(p==NULL)\
{\
printf("insufficient memory\n");\
}

typedef struct node* NODE;

struct node{
	int info;
	struct node *llink,*rlink;
};

	
	NODE display(NODE root)
	{
		if(root==NULL)
		{
			return 0;
		}
		
		
		display(root->llink);
        printf("%d \t",root->info);
		display(root->rlink);

		
		
	}

int main()
{
	int n,i,item;
	NODE temp,cur,root;
	printf("enter the number of nodes:\t");
	scanf("%d",&n);
	i=0;
	while(i<n)
	{
		MALLOC(temp,1,struct node);
		printf("enter the data:\t");
		scanf("%d",&item);
		temp->info=item;
		temp->llink=temp->rlink=NULL;
		if(i==0)
		{
			root=temp;
		}
		
		else
		{
			cur=root;
			if(temp->info>cur->info)
			{
				while(1)
				{
					if(cur->rlink==NULL)
					{
					cur->rlink=temp;
					break;	
					}
					else 
					cur=cur->rlink;
				}
			}
			
			else
			{
				while(1)
				{
					if(cur->llink==NULL)
					{
						cur->llink=temp;
						break;
					}
					
					
					else 
					cur=cur->llink;
				}
			}
		}
		i++;
	}

	display(root); 
}