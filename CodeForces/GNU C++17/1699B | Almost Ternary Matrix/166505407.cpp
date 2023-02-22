#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll r;cin>>r;while(r--)
    {
     ll p,q;
     cin>>p>>q;
     for(int i=0;i<p;i+=1)
     {
      for(int j=0;j<q;j+=1)
      {
       cout<<((i+1)/2+(j+1)/2)%2<<" ";
      }
      cout<<"\n";
     }
    }
}