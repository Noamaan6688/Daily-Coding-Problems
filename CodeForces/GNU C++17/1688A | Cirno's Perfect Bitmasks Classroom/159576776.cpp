#include <iostream>
using namespace std;
 
int main() {
  int k,a,b;
  cin >> k;
  while(k--){
    cin >> a;
    b = a&-a;
    while(!(a^b) || !(a&b)){
      ++b;
    }
    cout << b << '\n';
  }
  
  return 0;
}