#include<bits/stdc++.h>
using namespace std;

int matrixchain(int p[],int i,int j)
{
    if(i == j)
    return 0;
    int k;
    int min = INT_MAX;
    int count;
    
    for(k=i;k<j;k++)
    {
        count= matrixchain(p,i,k)
               + matrixchain(p,k+1,j)
               +p[i-1]*p[k]*p[j];
        
        if(count< min)
        min=count;
    }
    return min;
}
int main()
{
    int arr[20];
    int n;
    
    cin>> n;
    for(int i=0;i<=n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Minimum number of multiplication is "<<matrixchain(arr,1,n);
}

