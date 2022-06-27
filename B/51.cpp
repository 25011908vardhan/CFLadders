#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
    int n;
    cin>>n;
    int a[n];
    unordered_map<int,int>m;
    for(int i=0;i<n;i++)
    cin>>a[i],m[a[i]]++;
    int ans=0;
    while(m.size())
    {
        int f=0,val=0;
            vector<int>toErase;
        for(auto &it:m)
        {
            it.second--;
            if(it.second==0){
                toErase.push_back(it.first);
            }
                val++;
        }
            for(auto &it:toErase)m.erase(it);
            ans+=val-1;
    }
    cout<<ans<<endl;
    

}