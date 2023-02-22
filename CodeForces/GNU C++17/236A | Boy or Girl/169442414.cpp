#include<iostream>
#include <unordered_set>
using namespace std;
int main()
{
    string s;cin>>s;
    unordered_set<char>st;
    for (int i=0;i<s.size();i+=1) st.insert(s[i]);
    if (st.size()%2==0) cout<<"CHAT WITH HER!\n";
    else cout<<"IGNORE HIM!\n";
    return 0;
}