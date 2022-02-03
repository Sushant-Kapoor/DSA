#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int M = 1e9 + 7;

ll mod_exponentiation(ll a, ll b)
{
    if (b == 0)
        return 1;

    ll res = mod_exponentiation(a, b / 2);

    if (b & 1)
        return (a * (res * res) % M) % M;

    else
        return (res * res) % M;
}

int main()
{
    ll a = 3;
    ll b = 5;
    cout << mod_exponentiation(a, b);
    return 0;
}