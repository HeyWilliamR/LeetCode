#include <iostream>
#include "maxNumberSolution.h"

using namespace std;
int main()
{
    maxNumberSolution solution;
    vector<int> num1 = {3, 4, 6, 5};
    vector<int> num2 = {9, 1, 2, 5, 8, 3};
    vector<int> result = solution.maxNumber(num1,num2,5);
    for(int i = 0;i<result.size();++i)
    {
        cout<<result[i]<<',';
    }
    return 0;
}