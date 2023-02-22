// Hi
#include <bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define fn(i,j,k) for(int i=j;i<=k;i++)
#define ll long long int
#define flash  ios_base::sync_with_stdio(0); cin.tie(0);
#define MOD 1000000007
 
using namespace std;
 
int main()
{
 flash
 int r;cin>>r;while (r--)
 {
  string s;
  cin>>s;
  set<char> st;
  int c=0;
  f(i,s.length())
  {
   st.insert(s[i]);
   if(st.size()>3){
    c+=1;
    st.clear();
   }
   st.insert(s[i]);
  }
  if(st.size()!=0)
  c+=1;
  cout<<c<<"\n";
 }
 
 return 0;  
}
/*
6
lollipops
stringology
abracadabra
codeforces
test
f
 
*/