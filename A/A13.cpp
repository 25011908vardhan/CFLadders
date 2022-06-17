#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=0,n,j,x,y;
    for(;i<5;i++)
    for(j=0;j<5;j++)
    {
        cin>>n;
        if(n==1) {x=i;y=j;}
    }
    cout<<abs(2-x)+abs(2-y)<<endl;
    return 0;
}