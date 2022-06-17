#include<bits/stdc++.h>
using namespace std;
bool solve(int n,int a,int k)
{
    int ans=0;
    while(n||a)
    {
        if(n%2!=a%2)ans++;
        n/=2;
        a/=2;
    }
    if(ans<=k) return true;
    else return false;
}
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    int a[m+1];
    for(int i=0;i<=m;i++) cin>>a[i];
    int num=a[m],ans=0;
    for(int i=0;i<m;i++)
    if(solve(num,a[i],k))ans++;
    cout<<ans<<endl;
    return 0;
}