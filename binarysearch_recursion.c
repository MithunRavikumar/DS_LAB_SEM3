
#include<stdio.h>
int binary(int[],int,int,int);

int main()
{
    int key,size,pos,high,low,i;
    int arr[20];

    printf("enter size of list \t");
    scanf("%d",&size);

    printf("enter elements in ascending order only \n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("enter the element to be searched \t");
    scanf("%d",&key);
    
    low=0;
    high=size-1;

    pos=binary(arr,key,low,high);

    if(pos!=-1)
    {
        printf("\nkey found at %d position\n",pos+1);
    }

    else
    {
        printf("element not found \n");
        return 0;
    }
}

int binary(int arr[],int key,int low,int high)
{
    int mid;

    if(low>high)
    return -1;

    mid=(low+high)/2;
    
    if(key==arr[mid])
    return mid;

    else if(key<arr[mid])
    {
        binary(arr,key,low,mid-1);
    }

    else
    {
        binary(arr,key,mid+1,high);
    }
}