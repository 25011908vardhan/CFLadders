#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string ans;
    int k=n/4;
    while(k--)
    ans+="abcd";
    k=n%4;
    for(int i=0;i<k;i++) ans.push_back(i+'a');
    cout<<ans<<endl;
    return 0;
}