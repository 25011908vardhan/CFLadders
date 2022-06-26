#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int inc=1,dec=1;
    for(int i=1;i<n;i++)
    {
        if(a[i]>a[i-1])dec=0;
        else if(a[i]<a[i-1])inc=0;
    }
    if((inc==dec&&inc==1)||(inc==1))cout<<0<<endl;
    else if(dec)(n==2)?cout<<1<<endl:cout<<-1<<endl;
    else{
        // cout<<"in"<<endl;
        int i=1;
        while(i<n&&a[i]>=a[i-1])
        i++;
        int k=i;
        i++;
        while(i<n&&a[i]>=a[i-1])
        i++;
        if(i!=n){cout<<-1<<endl;return 0;}
        if(a[n-1]>a[0]){cout<<-1<<endl;return 0;}
        i=1;
        while(i<k&&a[i]>=a[i-1])
        i++;
        if(i!=k){cout<<-1<<endl;return 0;}
        else cout<<n-k<<endl;
    }
    
}