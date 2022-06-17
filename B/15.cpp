#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,M;
    cin>>n>>M;
    unordered_map<string,string>m;
    for(int i=0;i<M;i++)
    {
        string a,b;
        cin>>a>>b;
        m[a]=(a.length()<=b.length())?a:b;
    }
    string a;
    for(int i=0;i<n;i++) cin>>a,cout<<m[a]<<" ";

    return 0;
}