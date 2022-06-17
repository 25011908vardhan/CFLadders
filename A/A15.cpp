#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,ans=0;
    unordered_map<int,int>m,n;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        m[a]++;
        n[b]++;
    }
    for(auto &it:m)
    ans+=(it.second)*(n[it.first]);
    
    
    
    
    cout<<ans<<endl;
    return 0;
}