// #219 Contains Duplicate - II

#include <bits/stdc++.h>

using namespace std;

bool containsNearbyDuplicate(vector<int> &nums, int k)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < nums.size(); i++)
    {
        if (mp.find(nums[i]) != mp.end())
        {
            if (abs(i - mp[nums[i]]) <= k)
                return true;
            else
                mp[nums[i]] = i;
        }
        else
            mp[nums[i]] = i;
    }
    return false;
}