#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
    int n;
    cin>>n;
    int a[n][2];
    unordered_map<int,int>h;
    for(int i=0;i<n;i++)
    cin>>a[i][0]>>a[i][1],h[a[i][0]]++;
    for(int i=0;i<n;i++)
    cout<<n-1+h[a[i][1]]<<" "<<n-1-h[a[i][1]]<<endl;
}