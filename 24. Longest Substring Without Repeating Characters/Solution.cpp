#include <bits/stdc++.h>
int uniqueSubstrings(string input)
{
    int n = input.size();
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        set<char> s;
        s.insert(input[i]);

        for (int j = i + 1; j < n; j++)
        {
            if (s.find(input[j]) != s.end())
            {
                ans = max(ans, (int)s.size());
                break;
            }

            else
            {
                s.insert(input[j]);
            }
        }
    }

    return ans == 0 ? input.size() : ans;
}