#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    long long  int ans=0;
    ans+=abs(a[0]);
    for(int i=1;i<n;i++)
    {
        ans+=abs(a[i]-a[i-1]);
    }
    cout<<ans<<endl;
    return 0;
}