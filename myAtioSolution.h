//
// Created by seara on 2018/10/31.
//

#ifndef LEETCODE_MYATIOSOLUTION_H
#define LEETCODE_MYATIOSOLUTION_H

#include <string>
using namespace std;
class myAtioSolution {
private:
    bool Isoverflow(int num,int next)
    {
        if(num>INT_MAX/10||(num==INT_MAX/10&&next>7)){
            return true;
        }
        if(num<INT_MIN/10||(num==INT_MIN/10&&next>8))
        {
            return true;
        }
        return false;
    }
public:
    int myAtoi(string str);

};


#endif //LEETCODE_MYATIOSOLUTION_H
