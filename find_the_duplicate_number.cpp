// #287 find the Duplicate Number
#include<bits/stdc++.h>

using namespace std;

int findDuplicate(vector<int>& nums) {
      for(int i = 0 ; i < nums.size() ; i++)
        {
            int num = abs(nums[i]);
            if(nums[num] < 0)
            {
                return num;
            }
            nums[num] = -1 * nums[num];
        }
       return -1;
}