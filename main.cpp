#include <iostream>
#include "TwoSumSolution.h"
using namespace std;
int main()
{
    vector<int> nums = {2, 7, 11, 15};
    TwoSumSolution solution;
    vector<int> result = solution.twoSum(nums,9);
    for(int i =0;i<result.size();++i)
    {
        cout<<result[i]<<',';
    }
    return 0;
}