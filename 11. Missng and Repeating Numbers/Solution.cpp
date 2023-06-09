#include <bits/stdc++.h>

pair<int, int> missingAndRepeating(vector<int> &arr, int n)
{
    // first find the XOR of all array elements
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        x = x ^ arr[i];
    }

    // then find the XOR of this result with all numbers from 1 to n
    for (int i = 1; i <= n; i++)
    {
        x = x ^ i;
    }

    // now find the rightmost set bit
    int setBit = x & 1;
    int a = 0, b = 0;

    // find the XOR based on this set bit from array and from 1 to n
    for (int i = 0; i < n; i++)
    {
        if (arr[i] & setBit)
            a = a ^ arr[i];
        else
            b = b ^ arr[i];
    }

    for (int i = 1; i <= n; i++)
    {
        if (i & setBit)
            a = a ^ i;
        else
            b = b ^ i;
    }

    // check for which is missing and which is repeating
    for (int i = 0; i < n; i++)
    {
        if (a == arr[i])
        {
            return make_pair(b, a);
        }
        else if (b == arr[i])
        {
            return make_pair(a, b);
        }
    }
}
