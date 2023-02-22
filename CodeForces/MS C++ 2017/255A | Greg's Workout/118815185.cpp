// Hi
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#define f(i, n) for (int i = 0; i < n; i++)
#define f1(i, n) for (int i = 1; i <= n; i++)
#define fn(i, j, k) for (int i = j; i <= k; i++)
#define ll long long int
 
using namespace std;
 
int main()
{
  int k,s1=0,s2=0,s3=0;cin>>k;
  int *b=new int[k];
  f(i,k)
  {
    cin>>b[i];
  }
  for (int i=0;i<k;i+=3) s1+=b[i];
  for (int i=1;i<k;i+=3) s2+=b[i];
  for (int i=2;i<k;i+=3) s3+=b[i];
  if (s1>s2 && s1>s3) cout<<"chest"<<endl;
  else if (s1<s2 && s2>s3) cout<<"biceps"<<endl;
  else if (s1<s3 && s2<s3) cout<<"back"<<endl;
 
  return 0;
}