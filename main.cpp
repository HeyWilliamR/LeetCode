#include <iostream>
#include "findMedianSortedSolution.h"

using namespace std;
int main()
{
    findMedianSortedSolution solution;
    vector<int> nums1 = {1,3};
    vector<int> nums2 = {2};
    cout<<solution.findMedianSortedArrays(nums1,nums2);
    return 0;
}