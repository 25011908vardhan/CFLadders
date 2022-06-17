#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int ans=0;
    for(int i=0;i<n;i++)
    {
        int element=*min_element(a,a+n);
        // cout<<element<<endl;
        for(int i=0;i<n;i++) {
        if(a[i]!=INT_MAX) a[i]-=element;
        if(a[i]==0) a[i]=INT_MAX;
        // cout<<a[i]<<" ";
        }
        // cout<<endl;
        // a[element]=INT_MAX;
        int f=0;
        for(int j=1;j<n-1;j++)
        {
            if((a[j]==INT_MAX&&a[j-1]==INT_MAX)||(a[j]==INT_MAX&&a[j+1]==INT_MAX))
            {f=1; break;}
        }
        if(a[n-1]==INT_MAX||a[0]==INT_MAX) f=1;
        ans+=element;
        if(f) break;
    }
    cout<<ans<<endl;
    return 0;
}