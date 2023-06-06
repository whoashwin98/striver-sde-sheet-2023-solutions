#include <bits/stdc++.h>
int maximumProfit(vector<int> &prices)
{
    int n = prices.size();
    int ans = 0;
    int buy = prices[0];
    int sell = 0;

    for (int i = 1; i < n; i++)
    {
        sell = prices[i];
        ans = max(ans, sell - buy);
        buy = min(buy, prices[i]);
    }

    return ans;
}