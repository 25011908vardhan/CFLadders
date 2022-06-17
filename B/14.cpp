#include<bits/stdc++.h>
using namespace std;
int val(string s,int *a)
{
    int ans=0;
    for(int i=0;i<s.length();i++)
    ans+=(i+1)*a[s[i]-'a'];
    return ans;
}
int main()
{
    string s;
    int k;
    cin>>s>>k;
    int a[26],maxi=INT_MIN,n=s.length();
    for(int i=0;i<26;i++) cin>>a[i],maxi=max(maxi,a[i]);
    int ans=val(s,a);
    ans+=maxi*(k*n+(k*(k+1))/2);
    cout<<ans<<endl;

    
    return 0;
}