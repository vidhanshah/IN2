#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    string s,t;
    cin>>s>>t;
    ll alphas[26]={0};
    ll alphat[26]={0};
    ll n=s.length();
    ll p=t.length();
    for(ll i=0;i<p;i++)
    {
        alphat[t[i]-'A']++;
    }
    for(ll i=0;i<n&&i<p;i++)
    {
        alphas[s[i]-'A']++;
    }
    ll ch=0;
    for(ll i=0;i<26;i++)
    {
        if(alphas[i]!=alphat[i])
        {
            ch=1;
            break;
        }
    }
    if(ch==0)
       cout<<"0\n";
    for(ll i=p;i<n;i++)
    {
       ch=0;
       alphas[s[i-p]-'A']--;
       alphas[s[i]-'A']++;
       for(ll i=0;i<26;i++)
        {
            if(alphas[i]!=alphat[i])
            {
                ch=1;
                break;
            }
        }
        if(ch==0)
            cout<<i-p+1<<"\n";
    }
}
