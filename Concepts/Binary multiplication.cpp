#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int M = 1e9 + 7;

// using modulo
// int binary_multiplication(int a, int b)
// {
//     int ans = 0;
//     while (b)
//     {
//         if (b & 1)
//             ans = (ans + a)%M;
//         a = (a + a)%M;
//         b >>= 1;
//     }
//     return ans;
// }

int binary_multiplication(int a, int b)
{
    int ans = 0;
    while (b)
    {
        if (b & 1)
            ans = ans + a;
        a = a + a;
        b >>= 1;
    }
    return ans;
}

int main()
{
    ll a = 3;
    ll b = 8;
    cout << binary_multiplication(a, b);
    return 0;
}