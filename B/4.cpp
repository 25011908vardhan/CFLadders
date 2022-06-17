#include<bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    cin>>n;
    int num=0;
    int ans=0;
    // cout<<n.size()<<endl;
    while(n.size()>1)
    {
        for(auto &it:n)
        num+=(it-'0');
        n=to_string(num);
        // cout<<num<<" "<<n<<endl;
        num=0;
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}