//
// Created by seara on 2018/10/23.
//

#ifndef LEETCODE_ADDTWONUMBERSSOLUTION_H
#define LEETCODE_ADDTWONUMBERSSOLUTION_H
struct ListNode {
         int val;
         ListNode *next;
         ListNode(int x) : val(x), next(nullptr) {}
     };

class addTwoNumbersSolution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);
};


#endif //LEETCODE_ADDTWONUMBERSSOLUTION_H
