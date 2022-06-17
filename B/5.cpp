#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,mini=2000;
    cin>>k;
    int a[k][4];
    unordered_map<int,int>m;
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<4;j++)
        cin>>a[i][j];
    }
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<k;j++)
        {
            if(i==j) continue;
            int f=0;
            for(int p=0;p<3;p++)
            {
                if(a[i][p]<=a[j][p])
                {
                    f=1;break;
                }
            }
            if(!f)
            m[j]++;
        }
    }
    int ans=-1;
    for(int i=0;i<k;i++)
    {
        if(m[i]) continue;
        if(mini>a[i][3])
        {
            mini=a[i][3];
            ans=i+1;
        }
    }
    cout<<ans<<endl;
    return 0;
}