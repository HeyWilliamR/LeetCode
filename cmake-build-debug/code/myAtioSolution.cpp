//
// Created by seara on 2018/10/31.
//

#include "myAtioSolution.h"
int myAtioSolution::myAtoi(string str) {
    if(str.size()==0)
    {
        return 0;
    }
    int result = 0;
    int next = 0;
    int flag = false;
    int i = 0;
    while(str[i]==' ')
    {
        ++i;
    }
    if(str[i]=='+'||str[i]=='-')
    {
        if(str[i]=='-')
        {
            flag = true;
        }
        ++i;
    }
    for(;i<str.size();++i)
    {
        if(str[i]<'0'||str[i]>'9')
        {
            break;
        }
        next = str[i] - '0';
        if(this->Isoverflow(result,next))
        {
            if(flag)
                return INT_MIN;
            else
                return INT_MAX;
        }
        if(flag)
        {
            result = result*10 - next;
        }
        else
            result = result*10 + next;
    }
    return result;

}