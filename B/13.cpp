#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    long long int a[m],ans=0;
    for(int i=0;i<m;i++){ cin>>a[i];
    if(i==0) ans=a[i]-1;
    else{
        if(a[i]<a[i-1])ans+=a[i]+n-a[i-1];
        else ans+=a[i]-a[i-1];
    }
    }
    cout<<ans<<endl;

    return 0;
}