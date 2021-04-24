#pragma once

struct ListNode
 {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

 ListNode* solutionaRecursive(ListNode* l1, ListNode* l2)
 {
    if(l1 == nullptr)
        return l2;
    if(l2 == nullptr)
        return l1;
    
    ListNode* output = nullptr;
    if(l1->val < l2->val)
    {
        output = l1;
        l1->next = solutionaRecursive(l1->next, l2);
    }
    else
    {
        output = l2;
        l2->next = solutionaRecursive(l1, l2->next);
    }
    return output;
 }

 ListNode* inPlaceSolution(ListNode* l1, ListNode* l2)
 {
    if(l1 == nullptr)
        return l2;
    if(l2 == nullptr)
        return l1;

    ListNode* output = nullptr;
    if(l1->val < l2->val)
    {
        output = l1;
        l1 = l1->next;
    }
    else
    {
        output = l2;
        l2 = l2->next;
    }
    ListNode* current = output;
    while(l1 != nullptr && l2 != nullptr)
    {
        if(l1->val < l2->val)
        {
            current->next = l1;
            l1 = l1->next;
        }
        else
        {
            current->next = l2;
            l2 = l2->next;
        }
        current = current->next;
    }
    if(l1 != nullptr)
        current->next = l1;
    if(l2 != nullptr)
        current->next = l2;

    return output;
 }

 void print(ListNode* l)
 {
     while(l)
     {
        std::cout <<l->val <<" ";
        l = l->next;
     }
 }