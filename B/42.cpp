#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
void print(vector<string>v)
{
    int n=v.size();
    for(int i=0;i<n-1;i++)
    cout<<v[i]<<", ";
    cout<<v[n-1]<<"."<<endl;
}
int main()
{
    vector<pair<string,vector<int>>>m;
    int n;
    cin>>n;
    int maxTax=INT_MIN,maxPiz=INT_MIN,maxGal=INT_MIN;
    while(n--)
    {
        int si;
        cin>>si;
        string s;
        cin>>s;
        int taxi=0,pizzaDelivery=0,gals=0;
        while(si--)
        {
            string t;
            cin>>t;
            int a[6],ind=0;;
            for(int i=0;i<8;i++)
            if(t[i]!='-')
            a[ind++]=(t[i]-'0');
            int ident=1,dec=1;
            for(int i=1;i<6;i++)
            {
                if(a[i]!=a[i-1])
                ident=0;
                if(a[i]>=a[i-1])
                dec=0;
            }
            if(ident)taxi++;
            else if(dec) pizzaDelivery++;
            else gals++;
        }
            // cout<<s<<" Has Taxi-> "<<taxi<<" Pizz-> "<<pizzaDelivery<<" Gals-> "<<gals<<endl;
            maxTax=max(maxTax,taxi);
            maxPiz=max(maxPiz,pizzaDelivery);
            maxGal=max(maxGal,gals);
            // m[s]={taxi,pizzaDelivery,gals};
            m.push_back({s,{taxi,pizzaDelivery,gals}});
    }
    vector<string> tax,piz,gal;
    for(auto &it:m)
    {
        if(it.second[0]==maxTax)
        tax.push_back(it.first);
        if(it.second[1]==maxPiz)
        piz.push_back(it.first);
        if(it.second[2]==maxGal)
        gal.push_back(it.first);
    }
    cout<<"If you want to call a taxi, you should call: ";
    print(tax);
    cout<<"If you want to order a pizza, you should call: ";
    print(piz);
    cout<<"If you want to go to a cafe with a wonderful girl, you should call: ";
    print(gal);
}