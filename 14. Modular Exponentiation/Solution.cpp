#include <bits/stdc++.h>

int modularExponentiation(int x, int n, int m)
{
    long long ans = 1;
    long long xx = x;
    while (n > 0)
    {
        if (n & 1)
        {
            ans = ((ans % m) * (xx % m)) % m;
        }
        xx = ((xx % m) * (xx % m)) % m;
        n = n >> 1;
    }
    return (int)ans % m;
}