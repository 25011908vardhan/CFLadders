#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
const int M=1e6+3;
int moduloExpo(lli x,int y)
{
    // cout<<x<<"^"<<y<<"= ";
    int res=1;
    // if(x==0) return 0;
    // x%=M;
    while(y)
    {
        if(y%2==1)
        res=((res%M)*(x%M))%M;
        x=((x%M)*(x%M))%M;
        y=y>>1;
    }
    // cout<<res<<endl;
    return (res%M);
}
int conv(string s)
{
    lli ans=0;
    int n=s.length();
    for(int i=0;i<n;i++)
    {ans=(ans%M+moduloExpo(2,i)*(s[n-1-i]-'0'))%M;
    // cout<<ans<<endl;
    }
    return ans%M;
}
int main()
{
    unordered_map<char,string>m;
    m['>']="1000";
    m['<']="1001";
    m['+']="1010";
    m['-']="1011";
    m['.']="1100";
    m[',']="1101";
    m['[']="1110";
    m[']']="1111";
    string s;
    cin>>s;
    string num;
    for(auto &it:s)
    num+=m[it];
    // cout<<num<<endl;
    int n;
    n=conv(num);
    cout<<n%M<<endl;
}
