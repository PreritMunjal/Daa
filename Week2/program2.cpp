#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; 
    cout<<"Enter the number of test cases :";
    cin>>t;
    while(t>0){
        t--;
        int size;   
        cout<<"Enter the size of array : ";
        cin>>size;
        int a[size];
        unordered_set <int> st;
        cout<<"Enter the elements of array:";
        for(int l = 0; l < size; ++l)
        {
            cin>>a[l];
            st.insert(a[l]);
        }
        int flag = 0, i, j;
        for(i = 0; i < size; ++i)
        {
            for(j = i+1; j < size; ++j)
            {
                int sum = a[i] + a[j];
                if(st.find(sum) != st.end()){flag = 1;   break;}
            }
            if(flag == 1){break;}
        }
        int sum = a[i] + a[j], position = -1;
        for(int k = size-1; k >=0; --k){
            if(a[k] == sum){position = k;   break;}
        }
        if(position != -1)
            cout<<i<<" "<<j<<" "<<position<<endl;
        else
            cout<<"No Sequence found ! "<<endl;
    }
    return 0;
}
