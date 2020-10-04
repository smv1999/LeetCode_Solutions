// #238 Product of array except self
#include <bits/stdc++.h>

using namespace std;

vector<int> productExceptSelf(vector<int> &nums)
{
    int prod = 1;
    int n = nums.size();
    int res[n];
    res[0] = 1;
    for (int i = 0; i < n - 1; i++)
    {
        res[i + 1] = res[i] * nums[i];
    }

    int right = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        res[i] = right * res[i];
        right = right * nums[i];
    }
    vector<int> finalRes(res, res + sizeof(res) / sizeof(res[0]));
    return finalRes;
}