#include <bits/stdc++.h>
using namespace std;
bool isSubsetSum(int arr[],int n,int sum)
{
    if(sum==0)
    {
        return true;
        
    }
    if(n==0 && sum!=0)
    {
        return false ;
        
    }
    if(arr[n-1]>sum)
     return isSubsetSum(arr,n-1,sum);
    
    return isSubsetSum(arr,n-1,sum)
      || isSubsetSum(arr,n-1,sum-arr[n-1]);
    
}
bool findpartiion(int arr[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
      sum+=arr[i];
    if(sum% 2!=0)
     return false;
     
    return isSubsetSum(arr,n,sum /2);
}
int main ()
{
    int arr[25],n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    if(findpartiion(arr,n)== true)
    {
        cout<<"yes";
    }
    else
    {
        cout<< "no";
    }
    return 0;
    
}
