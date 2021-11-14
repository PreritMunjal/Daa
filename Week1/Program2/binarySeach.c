#include<stdio.h>
#define SIZE 100
int binarySearch(int[], int, int, int); 
int main()
{
    int n,arr[SIZE],item,location=-1;
    printf("Enter the number of elements : \n" );
    scanf("%d",&n);
    printf("Enter the elements of the array in sorted way : \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the number to search :\n ");  
    scanf("%d",&item);  
    location = binarySearch(arr, 0, n, item);  
    if(location != -1)   
    {  
        printf("Item found at location :%d",location);  
    }  
    else  
    {  
        printf("Item not found!");  
    }  
}
int binarySearch(int arr[], int beg, int end, int item)  
{  
    int mid;  
    if(end >= beg)   
    {     
        mid = (beg + end)/2;  
        if(arr[mid] == item)  
        {  
            return mid+1;  
        }  
        else if(arr[mid] < item)   
        {  
            return binarySearch(arr,mid+1,end,item);  
        }  
        else   
        {  
            return binarySearch(arr,beg,mid-1,item);  
        }  
      
    }  
    return -1;   
}
