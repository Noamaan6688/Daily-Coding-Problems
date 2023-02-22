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
 string s;getline(cin,s);
 string s1;
 set<char>s2;
 f(i,s.length())
 {
  if (int(s[i])>=97 && int(s[i])<=122)
  {
   s1+=s[i];
  }
 }
 for(auto i:s1) s2.insert(i);
 cout<<s2.size()<<endl;
 
 return 0;
}