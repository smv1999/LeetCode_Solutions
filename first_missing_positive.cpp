// #41. First Missing Positive
 #include<bits/stdc++.h>

 using namespace std;

 int firstMissingPositive(vector<int>& nums) {
        int index, temp;
        int n = nums.size();
        for(index=0;index<n;index++)
        {
            while(nums[index]>=1 && nums[index]<=n && nums[index]!=nums[nums[index]-1])
            {
                temp = nums[nums[index]-1];
                nums[nums[index]-1] = nums[index];
                nums[index] = temp;
            }
        }
        for(index=0;index<n;index++)
        {
            if((index+1) != nums[index])
                return index+1;
        }
        return n+1;
}    
