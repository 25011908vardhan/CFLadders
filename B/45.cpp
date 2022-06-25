#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    vector<int> b(k,0);
    for(int i=0;i<n;i++){cin>>a[i];
    b[i%k]+=a[i];
    }
    int ans=INT_MAX,ind=0;
    for(int i=0;i<k;i++)
    {
        if(ans>b[i])
        {
            ans=b[i];
            ind=i;
        }
    }
    cout<<ind+1<<endl;
    
}