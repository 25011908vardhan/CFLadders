#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
    int d,sum;
    cin>>d>>sum;
    int sa=0,sb=0,a,b,arr[d][2];
    for(int i=0;i<d;i++)
    cin>>arr[i][0]>>arr[i][1],sa+=arr[i][0],sb+=arr[i][1];
    if(sum>sb||sum<sa){cout<<"NO"<<endl;return 0;}
    cout<<"YES"<<endl;
    int extra=sum-sa;
    // cout<<sa<<" "<<sb<<" "<<extra<<endl;
    for(int i=0;i<d;i++)
    {
         int val=min(arr[i][1]-arr[i][0],extra);
        //  cout<<val<<endl;
         cout<<val+arr[i][0]<<" ";
         extra-=val;
    }
    return 0;

}