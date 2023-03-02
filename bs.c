
#include<stdio.h>
int binary(int[],int,int,int);

void main()
{
    int size, high,low,key;
    int position;
    int arr[20];

    printf("enter the size of the list \n");
    scanf("%d",&size);

    

    printf("enter the elements in the list \n");
    for(int i=0;i<size;i++)
    scanf("%d",&arr[i]);
    printf("enter the element to be searched \n");
    scanf("%d",&key);

    low =0;
    high=size-1;

    position=binary( arr, key, low, high);

    if(position!=-1)
    {
      printf("element found at position %d \t",position+1);
    }

    else
    {
        printf("position not found \n");
    }


}

int binary(int arr[],int x,int low,int high)
{
    int mid;
     if(low>high)
     {
         return -1;
     }

     mid=(low+high)/2;

      if(x==arr[mid])
     {
         return mid;
     }

     else if(x>arr[mid])
     {
       binary(arr,x,mid+1,high);
     }

     else
     {
         binary(arr,x,low,mid-1);
     }
}