#include<iostream>
using namespace std;
int main()
{
 int n,x=-1,y=101,p,q,t;
 cin>>n;
 for(int i=1;i<=n;i++)
 {
  cin>>t;
  if(t>x) x=t,p=i;
  if(t<=y) y=t,q=i;
 }
 if(p<q) cout<<p-1+n-q;
 else cout<<p-1+n-q-1;
 
    return 0;
}