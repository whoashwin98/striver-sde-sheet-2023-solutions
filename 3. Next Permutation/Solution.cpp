#include <bits/stdc++.h>

vector<int> nextPermutation(vector<int> &arr, int n)
{
    // finding the break point where order is mismatched
    int ind = -1;
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] < arr[i + 1])
        {
            // index i is the break point
            ind = i;
            break;
        }
    }

    // if break point does not exist, that means last permutation
    if (ind == -1)
    {
        // answer will be reversed to get the first permutation
        reverse(arr.begin(), arr.end());
        return arr;
    }

    // find the next greater element to the break point element
    for (int i = n - 1; i > ind; i--)
    {
        if (arr[i] > arr[ind])
        {
            swap(arr[i], arr[ind]);
            break;
        }
    }

    // reverse the right half to get the lexicographically lowest permutation
    reverse(arr.begin() + ind + 1, arr.end());

    return arr;
}