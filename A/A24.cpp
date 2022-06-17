#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    set<char> s;
    cin>>c;
    while(cin>>c)
    {
        if(c=='}') break;
        if(c!=' '&&c!=',')
        s.insert(c);
    }
    // for(auto &it: s) cout<<it<<" ";
    cout<<s.size()<<endl;
    return 0;
}