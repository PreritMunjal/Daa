#include <stdio.h>
int main()
{
    int array[100], n, c, d, position, t,test;
    printf("Enter the number test cases: \n");
    scanf("%d",&test);
    for(int k=0;k<test;k++)
    {
        printf("Enter the number of elements:\n");
        scanf("%d", &n);
        printf("Enter %d numbers:\n", n);
        for (c = 0; c < n; c++)
        scanf("%d", &array[c]);
        for (c = 0; c < (n - 1); c++) 
        {
            position = c;
            for (d = c + 1; d < n; d++)
            {
                if (array[position] > array[d])
                    position = d;
            }       
            if (position != c)
            {
                t = array[c];
                array[c] = array[position];
                array[position] = t;
            }
        }
        printf("Sorted list in ascending order:\n");
        for (c = 0; c < n; c++)
            printf("%d\n", array[c]);
    }
    return 0;
}
