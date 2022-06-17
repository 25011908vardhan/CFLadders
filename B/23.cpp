#include<bits/stdc++.h>
using namespace std;
static bool com(vector<int> &a,vector<int> &b)
{
    if(a[1]==b[1]&&a[1]==0) return a[0]>b[0];
    return a[1]>b[1];
}
int main()
{
    int n;
    cin>>n;
    vector<vector<int>> a(n,vector<int>(2));
    for(int i=0;i<n;i++)
    cin>>a[i][0]>>a[i][1];
    sort(a.begin(),a.end(),com);
    int ctr=0,ans=0;
    for(int i=0;i<n;i++)
    {
        if(a[i][1]!=0) {ctr+=a[i][1]-((i>0)?1:0);
        ans+=a[i][0];
        }
        else {
            ans+=a[i][0];
            ctr--;
        }
        if(ctr<=0) break;
    }
    cout<<ans<<endl;
    return 0;
}