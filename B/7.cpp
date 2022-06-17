#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a;
    unordered_map<int,int>m;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a;
        m[a]++;
    }
    int ans=0;
    for(auto &it:m)
    {
        if(it.first<=t) ans+=max(0,it.second-1);
        else ans+=it.second;
    }
    cout<<ans<<endl;
    return 0;
}