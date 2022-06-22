#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
    string s;
    cin>>s;
    int n=s.length();
    int flag=0;
    if(s[0]=='-')flag=1;
    string ans;
    int ctr=3;
    int i,j=n-1;
    while(s[j]!='.'&&j>=0)
    j--;
    if(j==-1)
    i=n-1;
    else i=j-1;
    // if(flag)ans.push_back(')');
    for(;i>=0;i--)
    {
        if(ctr--==0)
        {
            ctr=2;
            ans.push_back(',');
        }
        if(s[i]!='-')
        ans.push_back(s[i]);
    }
    if(ans[ans.size()-1]==',')ans.pop_back();
    ans.push_back('$');
    if(flag)ans.push_back('(');
    reverse(ans.begin(),ans.end());
    ans.push_back('.');
    if(j==-1)
    {
        ans+="00";
    }
    else if(j==n-2){
        ans.push_back(s[n-1]);
        ans.push_back('0');
    }
    else {
        ans.push_back(s[j+1]);
        ans.push_back(s[j+2]);
    }
    if(flag)ans.push_back(')');
    cout<<ans<<endl;
}