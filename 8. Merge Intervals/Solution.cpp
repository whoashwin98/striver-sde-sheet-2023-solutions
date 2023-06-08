#include <bits/stdc++.h>
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &a)
{
    vector<pair<int, int>> intervals;
    for (int i = 0; i < a.size(); i++)
    {
        intervals.push_back({a[i][0], a[i][1]});
    }

    sort(intervals.begin(), intervals.end());

    vector<vector<int>> ans;
    int i = 0;
    while (i < intervals.size())
    {
        int start = intervals[i].first;
        int end = intervals[i].second;

        int j = i + 1;
        while (j < intervals.size())
        {
            if (intervals[j].first <= end)
            {
                end = max(end, intervals[j].second);
                j++;
            }
            else
                break;
        }

        ans.push_back({start, end});
        i = j;
    }

    return ans;
}
