#include<stdio.h>
int main()
{
    int test,arr[20],n,flag=0;
    printf("Enter the number of test cases:\n");
    scanf("%d",&test);
    for(int k=0;k<test;k++)
    {
        printf("Enter the size of the array: \n");
        scanf("%d",&n);
        printf("Enter the elements of the array : \n");
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
            
        }
        for(int i= 0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(arr[i]==arr[j])
                {
                   flag=1;
                }
                
            }
        }
        printf("Output is:\n");
        if(flag== 1)
        {
            printf("yes\n");
            
        }
        else
        {
            printf("no \n");
        }
    }
    return 0;
}

