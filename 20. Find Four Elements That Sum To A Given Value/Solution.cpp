#include <bits/stdc++.h>

string fourSum(vector<int> arr, int target, int n)
{
    sort(arr.begin(), arr.end());

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int k = target - arr[i] - arr[j];
            int low = j + 1;
            int high = n - 1;
            while (low < high)
            {
                if (arr[low] + arr[high] == k)
                {
                    return "Yes";
                }
                else if (arr[low] + arr[high] < k)
                    low++;
                else
                    high--;
            }
        }
    }

    return "No";
}
