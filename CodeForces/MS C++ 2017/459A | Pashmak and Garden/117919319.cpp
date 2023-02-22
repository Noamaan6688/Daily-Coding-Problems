// Hi
#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <algorithm>
#define f(i, n) for (int i = 0; i < n; i++)
#define f1(i, n) for (int i = 1; i <= n; i++)
#define fn(i, j, k) for (int i = j; i <= k; i++)
#define ll long long int
 
using namespace std;
 
int main ()
{
 int p,q,r,s;cin>>p>>q>>r>>s;
 int m=abs(p-r);
 int n=abs(q-s);
 if (p==r) cout<<p+n<<" "<<q<<" "<<r+n<<" "<<s<<endl;
 else if (q==s) cout<<p<<" "<<q+m<<" "<<r<<" "<<s+m<<endl;
 else if (m!=n) cout<<-1<<endl;
 else cout<<p<<" "<<s<<" "<<r<<" "<<q<<endl;
 
 return 0;
}