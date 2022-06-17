#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    int i=0,m=a.size(),n=b.size(),p=0,q=0;
    while(p<m&&q<n)
    {
        if(a[p]==b[q]) {p++;q++;}
        else q++;
    }
    cout<<p+1<<endl;
    return 0;
}