#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cin>>n>>m;
    unordered_map<char,pair<unordered_map<int,int>,unordered_map<int,int>>>h;
    vector<vector<char>>v(n,vector<char>(m));
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
        cin>>v[i][j],h[v[i][j]].first[i]++,h[v[i][j]].second[j]++;
    string ans;
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    if(h[v[i][j]].first[i]==1&&h[v[i][j]].second[j]==1)
    ans.push_back(v[i][j]);

    cout<<ans<<endl;
    return 0;
}