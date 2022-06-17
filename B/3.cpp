#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,a,b,A=-1,B=-1;
    cin>>t>>x;
    while(t--)
    {
        cin>>a>>b;
        if(A==-1) {A=min(a,b);B=max(a,b);}
        else{
            if(min(a,b)>B||max(a,b)<A){
                cout<<-1<<endl;
                return 0;
            }
            else{
                A=max(A,min(a,b));
                B=min(B,max(a,b));
            }
        }
    }
    if(x>=A&&x<=B) cout<<0<<endl;
    else cout<<min(abs(x-A),abs(x-B))<<endl;
    return 0;
}