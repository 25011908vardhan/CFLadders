#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
    int n,M;
    cin>>n>>M;
    int a[n],b[M];
    map<int,int>m;
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<M;i++)
    cin>>b[i],m[b[i]]++;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        auto it=m.lower_bound(a[i]);
        if(it==m.end())ans++;
        else {
            ((*it).second)--;
            if((*it).second==0)
            {
                m.erase(it);
            }
        }
    }
    cout<<ans<<endl;

}