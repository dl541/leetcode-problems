#include <unordered_map>
#include <iostream>
#include <vector>
#include "twoSum.h"

std::vector<int> Solution::twoSum(std::vector<int> &nums, int target)
{
    std::unordered_map<int, int> seenNums;

    for (int index = 0; index < nums.size(); index++)
    {
        int currentNum = nums[index];
        if (seenNums.count(currentNum) > 0)
        {
            return std::vector<int> {seenNums[currentNum], index};
        }
        else
        {
            seenNums[target - currentNum] = index;
        }
    }
    std::vector<int> ans;
    return ans;
}