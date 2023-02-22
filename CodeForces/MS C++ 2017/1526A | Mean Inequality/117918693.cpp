// Hi
#include <iostream>
#include <vector>
#include <algorithm>
// #define f(i, n) for (int i = 0; i < n; i++)
// #define f1(i, n) for (int i = 1; i <= n; i++)
// #define fn(i, j, k) for (int i = j; i <= k; i++)
// #define ll long long int
 
using namespace std;
 
int main()
{
    long long int r;
    cin >> r;
    while (r--)
    {
        long long int k;
        cin >> k;
        long long int* b=new long long int[2*k];
        for (long long int n=0;n<2*k;n++)
        cin >> b[n];
        long long int c = 0, i = k, j = 0;
        sort(b, b + (2 * k));
        vector<long long int> v;
        while (c <= k)
        {
            v.push_back(b[i]);
            v.push_back(b[j]);
            i += 1;
            j += 1;
            c += 1;
        }
        for (long long int n=0;n<2*k;n++)
            cout << v[n] << " ";
        cout<<endl;
    }
    return 0;
}