cmake_minimum_required(VERSION 3.9)
project(LeetCode)

set(CMAKE_CXX_STANDARD 11)

add_executable(LeetCode main.cpp TwoSumSolution.cpp TwoSumSolution.h addTwoNumbersSolution.cpp addTwoNumbersSolution.h
        LongestSubstringSolution.cpp LongestSubstringSolution.h findMedianSortedSolution.cpp findMedianSortedSolution.h
        longestPalindromeSolution.cpp longestPalindromeSolution.h convertCoutNSolution.cpp convertCoutNSolution.h)