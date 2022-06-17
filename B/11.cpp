#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],ans=0;
    for(int i=0;i<n;i++) cin>>a[i];
    //For 1st Tree
    ans+=a[0]+1;
    for(int i=1;i<n;i++)
    {
        if(a[i]>a[i-1]){
            ans+=1+a[i]-a[i-1]+1;
        }
        else{
            ans+=a[i-1]-a[i]+1+1;
        }
    }
    cout<<ans<<endl;
    return 0;
}