#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
    int n,k;
    cin>>n>>k;
    if(n==k){cout<<-1<<endl;return 0;}
    cout<<n-k<<" ";
    for(int i=1;i<=n;i++)
    if(i!=n-k)cout<<i<<" ";
    cout<<endl;
     
}