#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int ans=-1,mini=INT_MAX,maxi=INT_MIN;
    int a[t][2];
    for(int i=0;i<t;i++)cin>>a[i][0]>>a[i][1];
    for(int i=0;i<t-1;i++)
    {
      int  mi=min(mini,a[i][0]),ma=max(maxi,a[i][1]);
      if(mi!=mini||ma!=maxi) ans=-1;
      mini=mi;maxi=ma;
        if(a[i][0]<=mini&&a[i][1]>=maxi&&a[i][0]<=a[i+1][0]&&a[i][1]>=a[i+1][1])
        ans=i+1;
    }
    
        if(mini>=a[t-1][0]&&maxi<=a[t-1][1])
        ans=t;
    
    cout<<ans<<endl;
    return 0;
}