#include<stdio.h>
void activities(int s[], int f[], int n)
 
{
 
	int i, j,c=1;
 
	printf ("Selected Activities are:\n");
 
	i = 1;
 
	printf("A%d ", i);
 
	for (j = 1; j <n; j++)
 
	{
 
		if (s[j] >= f[i])
           
		{
		   
            c++;
			printf ("A%d \t", j+1);
			i = j;
		
			
 
		}
 
	}
 printf("count= %d",c);
}
 
 
 
void main()
 
{
  int s[25], f[25], n;
  printf("Enter the number of activity \n");
  scanf("%d",&n);
  printf("Enter the start time \t");
  for(int i=0;i<n;i++)
  {
      scanf("%d",&s[i]);
  }
  printf("Enter the end time \t");
  for(int j=0;j<n;j++)
  {
      scanf("%d",&f[j]);
  }

 
	activities(s, f, n);
 

 
}
