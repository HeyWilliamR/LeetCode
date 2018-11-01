//
// Created by seara on 2018/10/29.
//

#include <vector>
#include <iostream>
#include "longestPalindromeSolution.h"
string longestPalindromeSolution::longestPalindrome(string s) {
    string newstring;
    newstring.push_back('^');
    for(int i = 0;i<s.size();++i) {
        newstring.push_back('#');
        newstring.push_back(s[i]);
    }
    newstring.push_back('#');
    newstring.push_back('$');
    int p[newstring.size()] = {0};
    int n = newstring.size();
    int c = 0, r = 0;
    for(int i = 1;i<n ;i++)
    {
        int i_mirror =  2*c - i;
        if(i_mirror>0)
            p[i] = (r>i)? min(r-i,p[i_mirror]):0;
        while(newstring[i+1+p[i]]==newstring[i-1-p[i]])
            p[i]++;
        if(i+p[i]>r)
        {
            c = i;
            r = i + p[i];
        }
    }
    int maxlen = 0;
    int centerIndex = 0;
    for(int i =0;i<n;++i)
    {
        cout<<p[i]<<",";
        if (p[i] > maxlen) {
            maxlen = p[i];
            centerIndex = i;
        }
    }
    return s.substr((centerIndex - 1 - maxlen)/2, maxlen);
}