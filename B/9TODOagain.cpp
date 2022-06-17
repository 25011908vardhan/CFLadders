#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d,n;
    cin>>d>>n;
    int a[n];
    int ans=0,curr=1;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n-1;i++)
    ans+=d-a[i];
    cout<<ans<<endl;
    
    return 0;
}