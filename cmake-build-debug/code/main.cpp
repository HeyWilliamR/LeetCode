#include <iostream>
#include "convertCoutNSolution.h"
#include "longestPalindromeSolution.h"
#include "reverseInt32Solution.h"
#include "myAtioSolution.h"
#include "isMatchSolution.h"

using namespace std;
int main()
{
    isMatchSolution solution;
    if(solution.isMatch("aaaaaaaaaaaaab",
                                "a*a*a*a*a*a*a*a*a*a*c"))
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
    return 0;
}