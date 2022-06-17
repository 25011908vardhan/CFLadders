#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n==0) {cout<<"O-|-OOOO"; return 0;}
    while(n)
    {
        int digit=n%12;
        if(digit<5)
        {
            cout<<"O-|";
            for(int i=0;i<digit;i++)
            cout<<"O";
            cout<<"-";
            while(4-digit>0)
            {cout<<"O";digit++;}            
        }
        else {
            cout<<"-O|";
            digit-=5;
            for(int i=0;i<digit;i++)
            cout<<"O";
            cout<<"-";
            while(4-digit>0)
            {cout<<"O";digit++;} 
        }
        cout<<endl;
        n/=12;
    }
    return 0;
}