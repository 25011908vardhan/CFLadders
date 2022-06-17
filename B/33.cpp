#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
static bool comp(int *a, int *b)
{return a[0]<b[0];}
int main()
{
    int n;
    cin>>n;
    int a[n][2];
    int p=INT_MIN,q=INT_MIN,r=INT_MAX,s=INT_MAX;
    for(int i=0;i<n;i++)
    cin>>a[i][0]>>a[i][1],p=max(p,a[i][0]),r=min(r,a[i][1]);
    int m;
    cin>>m;
    int b[m][2];
    for(int i=0;i<m;i++)
    cin>>b[i][0]>>b[i][1],q=max(q,b[i][0]),s=min(s,b[i][1]);
    // cout<<p<<" "<<r<<" "<<q<<" "<<s<<endl;
    cout<<max(0,max(p-s,q-r))<<endl;

}