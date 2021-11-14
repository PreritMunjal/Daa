#include <bits/stdc++.h>
using namespace std;
 
int count(int ind,int sum,int s[],int n)
{
    if(sum==0)
    return 1;
    if(ind>=n || sum<0)
    return 0;
    
    int left= count(ind,sum-s[ind],s,n);
    int right= count(ind+1,sum,s,n);
    return left+right;
}
int main()
{
    int s[15];
    int sum,n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    cin>>sum;
    cout<<count(0,sum,s,n);
}
