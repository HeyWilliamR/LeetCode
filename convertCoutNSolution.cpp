//
// Created by seara on 2018/10/30.
//

#include <memory.h>
#include <iostream>
#include "convertCoutNSolution.h"
string convertCoutNSolution::convert(string s, int numRows) {
    if(numRows==1)
        return s;
    string strs[numRows];
    int row = numRows - 1;
    int index = 0;
    int i = 0 ,j = 0;
    while(index<s.size())
    {
       if(i%row==0)
       {
           strs[j++].push_back(s[index++]);
       }
       else
       {
           if((i+j)%(row)==0)
           {
               strs[j++].push_back(s[index++]);
           }
           else {
               strs[j++].push_back(' ');
           }
       }
        if(j>row)
        {
            i++;
            j = 0;
        }
    }
    string str;
    for(int i = 0;i<numRows;++i)
    {
        str = str + strs[i];
    }
    return str;
}