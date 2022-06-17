#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int a[n],mini=INT_MAX,mii=-1,maxi=INT_MIN,mai=-1;
    for(i=0;i<n;i++) {cin>>a[i];
    if(maxi<a[i]){maxi=a[i];mai=i;}
    if(mini>=a[i]){mini=a[i];mii=i;}
    }
    if(mai<mii)cout<<mai+n-1-mii<<endl;
    else if(mai==mii) cout<<0<<endl;
    else  cout<<mai+n-2-mii<<endl;



    return 0;
}