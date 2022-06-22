#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fl(i,a,b) for(int i=a;i<=b;i++)
#define rl(i,a,b) for(int i=a;i>=b;i--)
int main()
{
    int n,s,t;
    cin>>n>>s>>t;
    int a[n];
    unordered_map<int,int>m;
    fl(i,0,n-1)cin>>a[i],m[i+1]=a[i];
    vector<int>vis(n+1,0);
    int ans=0;
    int curr=s;
    while(1)
    {
        // cout<<curr<<endl;
        if(curr==t)break;
        if(vis[curr]){ans=-1;break;}
        vis[curr]=1;
        curr=m[curr];
        ans++;
    }
    cout<<ans<<endl;



}