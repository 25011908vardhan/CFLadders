#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.size();
    vector<int>v;
    for(int i=0;i<n;i+=2)
        v.push_back(s[i]-'0');
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        if(i%2==0)cout<<v[i/2];
        else cout<<s[i];
    }
    return 0;
}