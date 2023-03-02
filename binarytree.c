
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* left,*right;
};

struct node*create()
{
    int x;

    struct node *newnode;
    newnode=(struct node*)malloc(1*sizeof(struct node));
    printf("enter data(-1 for no node) \n");
    scanf("%d",&x);
    if(x==-1)
    return 0;

    newnode->data=x;

    printf("enter left child of %d \t",x);
    newnode->left=create();

    printf("enter right child of %d \t",x);
    newnode->right=create();
    return newnode;
}

void preorder(struct node*root)
{
    if(root==0)
    return;
    
    printf("%d",root->data);
    preorder(root->left);
    preorder(root->right);

}

void inorder(struct node*root)
{
    if(root==0)
    return;
    
    
    inorder(root->left);
    printf("%d",root->data);
    inorder(root->right);

}

void postorder(struct node*root)
{
    if(root==0)
    return;
    
    
    postorder(root->left);
    postorder(root->right);
    printf("%d",root->data);

}

void main()
{
    int choice;
    struct node*root;
    root=0;
    root=create();
    while(1)
    {
        printf("1.preorder \t 2.postorder\t 3. inorder \t 4.exit \n" );
        printf("enter choice \n");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: printf("preorder is \n");
                    preorder(root);
                    printf("\n");
                    break;

            case 2: printf("postorder is \n");
                    postorder(root);
                    printf("\n");
                    break;

            case 3: printf("inorder is \n");
                    inorder(root);
                    printf("\n");
                    break;
            
            case 4: exit(0);

            default: printf("invalid choice \n");
        }




    }

}