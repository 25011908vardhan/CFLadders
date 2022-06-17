#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int ctr4=0,ctr7=0;
    for(auto &it:s)
    {
        if(it=='4')ctr4++;
        else if(it=='7') ctr7++;
    }
    if(!ctr4&&!ctr7) cout<<-1<<endl;
    else{
        if(ctr4>=ctr7) cout<<'4'<<endl;
        else cout<<'7'<<endl;
    }
    return 0;
}