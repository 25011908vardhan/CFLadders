#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,m; cin>>n>>m;
    vector<int>v;
    for(int i=0;i<n;i++) {
    cin>>x;
    if(x<0) v.push_back(x);
    }
    sort(v.begin(),v.end());
    int ans=0;
    for(int i=0;i<v.size()&&(m--);i++)
    ans+=abs(v[i]);
    cout<<ans<<endl;



    return 0;
}