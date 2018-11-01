//
// Created by seara on 2018/10/23.
//

#include "addTwoNumbersSolution.h"
ListNode* addTwoNumbersSolution::addTwoNumbers(ListNode *l1, ListNode *l2) {
    ListNode *p = nullptr ,*q = nullptr;
    bool flag = false;
    p = l1;
    q = l2;
    ListNode *resultHead = new ListNode(1);//头节点到时候会删掉的
    ListNode *resultTail = resultHead;
    int sumtemp;
    while(p!= nullptr||q!= nullptr)
    {
        if(p!= nullptr&&q!= nullptr)
        {
            sumtemp = p->val + q->val +flag;
            resultTail->next = new ListNode(sumtemp%10);
            resultTail = resultTail->next;
            if(sumtemp/10>0)
            {
                flag = true;
            }
            else
            {
                flag = false;
            }
            p = p->next;
            q = q->next;
        }
        else
        {
            ListNode *remain = p == nullptr? q:p;
            while(remain!= nullptr&&flag)
            {
                remain->val = remain->val + 1;
                if(remain->val>=10)
                {
                    remain->val  = remain->val - 10;
                }
                else
                {
                    flag = false;
                }
                remain = remain ->next;
            }
            remain = p== nullptr? q:p;
            while(remain!= nullptr)
            {
                resultTail->next = remain;
                resultTail = resultTail->next;
                remain = remain->next;
            }
            break;
        }
    }
    if(flag)
    {
        resultTail->next = new ListNode(1);
    }
    p = resultHead;
    resultHead = resultHead->next;
    delete (p);
    return resultHead;
}