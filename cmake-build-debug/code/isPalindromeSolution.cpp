//
// Created by seara on 2018/11/1.
//
#include <vector>
#include "isPalindromeSolution.h"
using namespace std;
bool isPalindromeSolution::isPalindrome(int x) {
    if(x<0)
        return false;
    vector<int> num;
    while(x!=0)
    {
        num.push_back(x%10);
        x  = x /10;
    }
    for(int i = 0,j = num.size()-1;i<j;++i,--j){
        if(num[i]!=num[j])
            return false;
    }
    return true;
}