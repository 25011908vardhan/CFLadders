#include<bits/stdc++.h>
using namespace std;
static bool comp(pair<int,int> a,pair<int,int>b){
    return a.first>b.first;
}
int main()
{
   
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
        int n,k;
        cin>>n>>k;
        int a[n];
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++) cin>>a[i],v.push_back({a[i],i});
        sort(v.begin(),v.end(),comp);
        cout<<v[k-1].first<<endl;
        for(int i=0;i<k;i++)
            cout<<v[i].second+1<<" ";

    return 0;
}