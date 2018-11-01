//
// Created by seara on 2018/10/31.
//

#include <climits>
#include "reverseInt32Solution.h"
int reverseInt32Solution::reverse(int x) {
    int result = 0;
    int temp = 0;
    while(x!=0)
    {
        temp = x % 10;
        if(result>(INT_MAX/10)||(result==INT_MAX/10&&temp>7)){
            return 0;
        }
        if(result<(INT_MIN)/10||(result==INT_MIN/10&&temp<-8)){
            return 0;
        }
        result = result*10 + temp;
        x = x /10;
    }
    return result;

}