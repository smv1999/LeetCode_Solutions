// #215 Kth Largest Element in an array

#include <bits/stdc++.h>

using namespace std;

int findKthLargest(vector<int> &nums, int k)
{
    sort(nums.begin(), nums.end(), greater<int>());
    return nums[k - 1];
}