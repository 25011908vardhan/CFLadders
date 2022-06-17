#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int ans=INT_MIN,ctr=0;
    for(int i=0;i<n;i++)
    {
        ctr=1;
        if(i<n-1){
        for(int j=i+1;j<n;j++)
        {if(a[j]<=a[j-1])ctr++;
         else break;
        }
        }
        if(i>0){
            for(int j=i-1;j>=0;j--)
            {
                if(a[j]<=a[j+1]) ctr++;
                else break;
            }
        }
        ans=max(ans,ctr);
    }    
    cout<<ans<<endl;
    return 0;
}