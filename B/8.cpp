#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    double sum=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    int i;
    i=(n%2)?2:1;
        for(;i<n;i+=2)
        sum+=a[i]*a[i]-a[i-1]*a[i-1];
    if(n%2) sum+=a[0]*a[0];
    double ans= 3.1415926536;
    cout<<ans*sum<<endl;
    return 0;
}