#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
void euclid(lli &a, lli &b)
{
    if(a==0||b==0) return;
    if(a>=2*b) a%=2*b;
    else if(b>=2*a) b%=2*a;
    else return;
    euclid(a,b);
}
int main()
{
    lli a,b;
    cin>>a>>b;
    euclid(a,b);    
    cout<<a<<" "<<b<<endl;
}