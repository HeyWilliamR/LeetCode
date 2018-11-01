//
// Created by seara on 2018/10/24.
//
#include <map>
#include "LongestSubstringSolution.h"
int LongestSubstringSolution::lengthOfLongestSubstring(string s) {
    int maxlength = 0;
    int i=0,j = 0;
    map<char,int> maps;
    while(i<s.size()&&j<s.size())
    {
        if(maps.count(s[j])!=0)
        {
            i = i>maps[s[j]]? i:maps[s[j]];
        }
        maps[s[j]] = j+1;
        maxlength = maxlength>j-i+1? maxlength:j-i+1;
        ++j;
    }
    return maxlength;
}