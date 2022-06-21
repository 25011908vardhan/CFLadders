#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int ans=0;
    if(n==1)
    {
        cout<<k-a[0]<<endl;
        return 0;
    }
    while(1)
    {
        int f=0;
        for(int i=1;i<n;i++)
        {
            if(a[i]!=a[i-1]&&a[i-1]<k)
            {
                a[i-1]++;
                f=1;
            }
            else if(a[i]==a[i-1]&&a[i-1]!=k)f=1;
        }
            if(a[n-1]<k)
            a[n-1]++;
        if(!f)break;
        sort(a,a+n);
        // for(auto &it:a)cout<<it<<" ";
        // cout<<endl;
        ans++;
    }
    cout<<ans<<endl;
}