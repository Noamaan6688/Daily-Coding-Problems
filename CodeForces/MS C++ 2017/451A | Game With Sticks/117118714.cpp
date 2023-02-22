// Hi
#include <iostream>
#define f(i, n) for (int i = 0; i < n; i++)
#define f1(i, n) for (int i = 1; i <= n; i++)
#define fn(i, j, k) for (int i = j; i <= k; i++)
#define ll long long int
 
using namespace std;
 
int main()
{
 int p,q,c=0;cin>>p>>q;
 while (p>0 || q>0)
 {
  c+=1;p-=1;q-=1;
  if (p==0 || q==0) break;
 }
 // cout<<c<<endl;
 if (c%2==0) cout<<"Malvika"<<endl;
 else cout<<"Akshat"<<endl;
 
 return 0;
}