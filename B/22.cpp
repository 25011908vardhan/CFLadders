#include<bits/stdc++.h>
using namespace std;
int main()
{       
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
        int n,k,i=0;
        cin>>n>>k;
        int a[n];
        for(;i<n;++i)
        cin>>a[i];
        i=k-1;
        while(1)
        {
            if(a[i]==1){
                cout<<i+1<<endl;
                break;
            }
            i=(i+1)%n;
        }
    return 0;
}