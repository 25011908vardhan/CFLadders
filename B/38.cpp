#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[m][4];
    for(int i=0;i<m;i++)
    cin>>a[i][0]>>a[i][1]>>a[i][2]>>a[i][3];
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        int indMin=-1,mini=INT_MAX;
        for(int j=0;j<m;j++)
        {
            if(i<=a[j][1]&&i>=a[j][0])
            {
                if(a[j][2]<mini)
                {
                    mini=a[j][2];
                    indMin=j;
                }
            }
        }
        if(indMin!=-1) ans+=a[indMin][3];
    }
    cout<<ans<<endl;
}