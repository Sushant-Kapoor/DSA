#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int M = 1e9 + 7;

ll binary_exponentiation(ll a, ll b)
{
    ll ans = 1;
    while (b)
    {
        if (b & 1)
            ans = ans * a;
        a = a * a;
        b >>= 1;
    }
    return ans;
}

// using modulo inside
// ll binary_exponentiation(ll a, ll b)
// {
//     ll ans = 1;
//     while (b)
//     {
//         if (b & 1)
//             ans = (ans * a) % M;
//         a = (a * a) % M;
//         b >>= 1;
//     }
//     return ans;
// }

int main()
{
    ll a = 3;
    ll b = 5;
    cout << binary_exponentiation(a, b);
    return 0;
}