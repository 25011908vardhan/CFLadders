#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
    int n,p;
    cin>>n>>p;
    int a[p][2];
    map<int,set<int>>m;
    for(int i=0;i<p;i++)
    cin>>a[i][0]>>a[i][1],m[a[i][0]].insert(a[i][1]),m[a[i][1]].insert(a[i][0]);
    int ans=0;
    // for(auto &it:m)
    // {
    //     cout<<it.first<<" -> ";
    //     for(auto &itr:it.second)cout<<itr<<" ";
    //     cout<<endl;
    // }
    while(1)
    {
        int f=0;
        vector<int>v;
        for(auto &it:m)
        {
            if(it.second.size()==1)
            {
                f=1;
                v.push_back(it.first);
            }
        }
            if(!f||m.size()==0)break;
            ans++;
            for(auto &it:v)
            {
                int val=*m[it].begin();
                // if(m[val].size()>1)
                m[val].erase(it);
                m.erase(it);
            }
    }
    cout<<ans<<endl;

}