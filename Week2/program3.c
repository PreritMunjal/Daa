#include<stdio.h>
#define SIZE 100
int countPairsWithDiffK(int arr[],int n, int k)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr [i]-arr[j]== k || arr[j]-arr[i]==k)
            count++;
        }
    } 
    printf("Count is %d  \n",count);
}
int main()
{
    int arr[SIZE],n,k,test;
printf("Enter the number of test cases:\n");
scanf("%d",&test);
for(int j=0;j<test;j++)
{
    printf("Enter the number of elements:\n ");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the value :\n");
    scanf("%d",&k);
    countPairsWithDiffK(arr, n, k);
}
}
