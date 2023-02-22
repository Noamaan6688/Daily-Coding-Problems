// Hi
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <set>
#include <algorithm>
#define f(i, n) for (int i = 0; i < n; i++)
#define f1(i, n) for (int i = 1; i <= n; i++)
#define fn(i, j, k) for (int i = j; i <= k; i++)
#define ll long long int
 
using namespace std;
 
int main()
{
 int k,p=0,q=0,r=0,d=0;cin>>k;
 int* b1=new int[10000];
 int* b2=new int[10000];
 int* b3=new int[10000];
 f1(i,k)
 {
  cin>>d;
  if (d==1)
  {
   b1[p]=i;
   p+=1;
  } 
  if (d==2)
  {
   b2[q]=i;
   q+=1;
  } 
  if (d==3) 
  {
   b3[r]=i;
   r+=1;
  } 
 }
 int n=0;
 n=min(p,q);n=min(n,r);
 cout<<n<<endl;
 f(i,n)
 {
  cout<<b1[i]<<" "<<b2[i]<<" "<<b3[i]<<endl;
 }
 
 return 0;
}