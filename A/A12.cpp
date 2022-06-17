#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,k,ans=0;
    cin>>t>>k;
    while(t--)
    {
        int n;
        cin>>n;
        int ctr=0;
        while(n)
        {
            if(n%12==4||n%12==7) 
            ctr++;
            n/=12;
        }
        if(ctr<=k) ans++; 
    }
    cout<<ans<<endl;
    return 0;
}