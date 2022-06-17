#include<bits/stdc++.h>
using namespace std;
int main()
{
   int r,c,ans=0,ctr=0;
   cin>>r>>c;
   char a[r][c];
   unordered_map<int,int>m;
   for(int i=0;i<r;i++)
   {int flag=0;
    for(int j=0;j<c;j++)
    {
        cin>>a[i][j];
        if(a[i][j]=='S') {flag=1;
        m[j]++;
        }
    }
    if(flag==0) {ans+=c;
    ctr++;
    }
   }
//    cout<<ans<<" "<<ctr<<endl;
//    for(auto &it:m) cout<<it.first<<" "<<it.second<<endl;
    for(int j=0;j<c;j++)
    {
        if(m[j]<1) ans+=r-ctr;
    }
    cout<<ans<<endl;

    return 0;
}