// Hi
#include <iostream>
#include <string>
#define f(i, n) for (int i = 0; i < n; i++)
#define f1(i, n) for (int i = 1; i <= n; i++)
#define fn(i, j, k) for (int i = j; i <= k; i++)
#define ll long long int
 
using namespace std;
 
int main ()
{
 string s;cin>>s;
 int i=0;
 while(s[i]!='\0')
 {
  if (s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
  {
   cout<<" ";
   i+=2;
  }
  else cout<<s[i];
  i+=1;
 }
 
 return 0;
}