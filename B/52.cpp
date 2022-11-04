#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
    lli n,m,ans,rsz=0,csz=0;
    cin>>n>>m;
    ans=n*n;
    set<lli>row,col;
    for(int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        if(col.find(y)==col.end())
        col.insert(y),csz++;
        if(row.find(x)==row.end())
        row.insert(x),rsz++;
        cout<<ans-(csz*n+rsz*n-rsz*csz)<<" ";

    }
    
}
/*

*/