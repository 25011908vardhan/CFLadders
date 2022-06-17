#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int x=-1,y=-1,diff=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(abs(a[(i+1)%n]-a[i])<diff)
        {
            diff=abs(a[(i+1)%n]-a[i]);
            x=(i+1)%n;
            y=i;
        }
    }
    if(x!=-1&&y!=-1) cout<<y+1<<" "<<x+1;
    return 0;
}