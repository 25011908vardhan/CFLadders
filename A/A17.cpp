#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,l,r,plusC=0,negC=0;
    cin>>n>>m;
    int a;
    for(int i=0;i<n;i++) {cin>>a;
    (a==1)?plusC++:negC++;}
    while(m--)
    {
        cin>>l>>r;
        int val=r-l+1;
        if(val%2==0)
        {
            if(plusC>=val/2&&negC>=val/2) cout<<1<<"\n";
            else cout<<0<<"\n";
        }
        else cout<<0<<endl;
    }
    return 0;
}