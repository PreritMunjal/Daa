#include<stdio.h>
int main()
{
     int test;
     int arr[100], freq[100];
     int size, i, j, count,m;
     printf("Enter the number of test cases:\n");
     scanf("%d",&test);
     for(int k=0; k<test; k++)
    { 
      printf("Enter size of array: ");
      scanf("%d", &size);
      printf("Enter elements: ");
      for(i=0; i<size; i++)
      {
        scanf("%d", &arr[i]);
        freq[i] = -1;
       }
      for(i=0; i<size; i++)
     {
        count = 1;
        for(j=i+1; j<size; j++)
        {
            
            if(arr[i]==arr[j])
            {
                count++;
                freq[j] = 0;
            }
        }
        if(freq[i] != 0)
        {
            freq[i] = count;
        }
      }
     printf("\nEnter the element you want to check: \n");
     scanf("%d",&m);
     for(i=0; i<size; i++)
      {
        if(arr[i] == m && freq[i] != 0)
        {
            printf("%d occurs %d number of times\n", arr[i], freq[i]);
        }
      }
    }
}
