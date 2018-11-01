//
// Created by seara on 2018/10/25.
//

#include "findMedianSortedSolution.h"
double findMedianSortedSolution::findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2) {
    int m = nums1.size();
    int n = nums2.size();
    int i = 0,j = 0;
    int temp;
    if(nums1.size()==0||nums2.size()==0)
    {
        i = nums1.size() +nums2.size()/2;
        if(nums1.size()==0){
            if(nums2.size()%2!=0)
                return nums2[i];
            else
                return (nums2[i]+nums2[i+1])/2;
        }
        else
        {
            if(nums1.size()%2!=0)
                return nums1[i];
            else
                return (nums1[i] + nums1[i+1])/2;
        }
    }
    if(n<m)             //let n is a bigger one
    {
        temp = n;
        n = m;
        m = temp;
    }
    int max = m,min = 0,half = (m+n+1)/2;
    while(max>=min)
    {
        int i = (max +min)/2;
        j = half - i;
        if(i<max&&nums1[i]<nums2[j-1])
        {
            min = i+1 ;
        }
        else if(i>min&&nums1[i-1]>nums2[j])
        {
            max = i-1;
        }
        else
        {
            int leftmax;
            if(i==0)
            {
                leftmax = nums2[j-1];
            }
            else if(j==0){
                leftmax = nums1[i-1];
            }
            else{
                leftmax = nums1[i-1]>nums2[j-1]? nums1[i-1]:nums2[j-1];
            }
            if(m+n%2==1){
                return leftmax;
            }
            int rightmin;
            if(i==n)
            {
                rightmin = nums2[j];
            }
            else if(j == m){
                rightmin = nums1[i];
            }
            else
            {
                rightmin = nums1[i]<nums2[j]? nums1[i]:nums2[j];
            }
            return (rightmin+leftmax)/2.0;
        }
    }
    return 0.0;
}