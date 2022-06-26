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
    int totalDecreasing=0,ind;
    for(int i=1;i<n;i++)
    if(a[i]<a[i-1]){totalDecreasing++;ind=i;}
    if(totalDecreasing==0)cout<<0<<endl;
    else if(totalDecreasing>1)cout<<-1<<endl;
    else {
        if(a[n-1]>a[0])cout<<-1<<endl;
        else cout<<n-ind<<endl;
    }
}