#include <bits/stdc++.h>

int subarraysXor(vector<int> &arr, int x)
{
    int n = arr.size();
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        int xorr = arr[i];
        if (xorr == x)
            count++;

        for (int j = i + 1; j < n; j++)
        {
            xorr = xorr ^ arr[j];
            if (xorr == x)
                count++;
        }
    }

    return count;
}