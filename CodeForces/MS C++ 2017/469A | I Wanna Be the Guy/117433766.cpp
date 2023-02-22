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
 int k;
 cin>>k;
 int p,q,r;
 cin>>p;
 set<int>s;
 f(i,p) 
 {
  cin>>r;
  s.insert(r);
 }
 cin>>q;
 f(i,q)
 {
  cin>>r;
  s.insert(r);
 }  
 if (k==s.size()) cout<<"I become the guy."<<endl;
 else cout<<"Oh, my keyboard!"<<endl;
 
 return 0;
}