#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
double dis(lli x2,lli y2,lli x1,lli y1)
{
    return sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
}
int main()
{
    int n,vb,vs;
    cin>>n>>vb>>vs;
    lli a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    lli xu,yu;
    cin>>xu>>yu;
    double p=1e50,dmin=1e50,r=1e50;
    int ans=0;
    for(int i=1;i<n;i++)
    {
        double ti,d;
        ti=(double)a[i]/vb;
        d=dis(xu,yu,a[i],0);
        ti+=d/vs;
        if(p>ti){
            p=ti;
            ans=i;
            dmin=d;
        }
        else if(p==ti)
        {
            if(dmin>d){
                dmin=d;
                ans=i;
            }
        }
    }

cout<<ans+1<<endl;
}