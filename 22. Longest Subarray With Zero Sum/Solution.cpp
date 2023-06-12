#include <bits/stdc++.h>

int LongestSubsetWithZeroSum(vector<int> arr)
{
    int n = arr.size();
    int maxLen = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = arr[i];
        int len = 1;
        if (sum == 0)
        {
            maxLen = max(maxLen, len);
        }

        for (int j = i + 1; j < n; j++)
        {
            sum += arr[j];
            len++;
            if (sum == 0)
            {
                maxLen = max(maxLen, len);
            }
        }
    }

    return maxLen;
}