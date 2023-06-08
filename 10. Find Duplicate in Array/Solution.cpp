#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n)
{
    unordered_map<int, int> mp;

    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        if (mp.find(arr[i]) != mp.end())
        {
            ans = arr[i];
        }
        mp[arr[i]]++;
    }

    return ans;
}
