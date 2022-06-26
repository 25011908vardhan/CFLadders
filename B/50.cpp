#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
    int n,l;
    cin>>n>>l;
    long double a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    long double ans=-1,prev=a[0];
    int i=0;
    if(prev!=0)
    {
        ans=prev;
        i=1;
    }
    for(;i<n;i++)
    {
        ans=(2*ans<a[i]-prev)?(a[i]-prev)/2:ans;
        prev=a[i];
    }
    if(a[n-1]<l)
        ans=max(ans,l-a[n-1]);
    cout<<fixed<<setprecision(6)<<ans<<endl;
}