#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,val;
    cin>>n>>k;
    set<int>s;
    while(k--) {
        cin>>val;
        s.insert(val);
    }
    cin>>k;
    while(k--)
    {
        cin>>val;
        s.insert(val);
    }
    int i=0,sum=0;
    for(auto it=s.begin();it!=s.end();it++)
    sum+=*it;
    if(sum==(n*(n+1))/2) 
    cout<<"I become the guy."<<endl;
    else cout<<"Oh, my keyboard!"<<endl;

    return 0;
}