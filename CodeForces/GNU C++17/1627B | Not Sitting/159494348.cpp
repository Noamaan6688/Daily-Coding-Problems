#include<bits/stdc++.h>
using namespace std;
int main(){
 int k,t,n,m,a[100001],i,j;
 cin>>t;
 while(t--){
  k=0;
  cin>>n>>m;
  for(i=1;i<=n;i++){
   for(j=1;j<=m;j++){
    a[++k]=max(i-1,n-i)+max(j-1,m-j);
   }
  }
  sort(a+1,a+1+k);
  for(i=1;i<=k;i++){
   cout<<a[i]<<" ";
  }
  cout<<endl;
 }
}