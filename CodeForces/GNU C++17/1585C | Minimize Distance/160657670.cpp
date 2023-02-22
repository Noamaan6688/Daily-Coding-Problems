#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main()
{
    ll t,x,y,mx,mn,ans,k;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n>>k;
        ll a[n],i;
        for(i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        ll ans=0;
        for(i=n-1;i>=0 && a[i]>=0;i-=k) ans+=a[i];
        for(i=0;i<n && a[i]<0;i+=k) ans-=a[i];
        cout<<2*ans-max(abs(a[0]),a[n-1])<<endl;
    }
}