//
// Created by seara on 2018/10/23.
//

#include <iostream>
#include "TwoSumSolution.h"
vector<int> TwoSumSolution::twoSum(vector<int> &nums, int target) {
    map<int,int> maps;
    vector<int> result;
    int delta;
    for(int i =0;i<nums.size();++i)
    {
        if(!maps.count(nums[i])) {
            delta = target - nums[i];
            maps[delta] = i;
        }
        else
        {
            result.push_back(maps[nums[i]]);
            result.push_back(i);
            return result;
        }
    }
    return result;
}