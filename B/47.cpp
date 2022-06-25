
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
    unordered_map<char,int>m,n;
    string a,b;
    cin>>a>>b;
    for(auto &it:a)m[it]++;
    for(auto &it:b)n[it]++;
    int ans=0;
    for(auto &it:n)
    {
        if(m[it.first]==0){
            cout<<-1<<endl;
            return 0;
        }
        ans+=min(m[it.first],it.second);
    }
    cout<<ans<<endl;

}