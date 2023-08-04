#include <bits/stdc++.h> 
vector<int> separateNegativeAndPositive(vector<int> &nums){
    int p=0,i=-1;
    {
        for(int j=0;j<nums.size();j++)
        {
            if(nums[j]<p)
            {
                i++;
                swap(nums[i],nums[j]);
            }
            
        }
    }
    return nums;
}
