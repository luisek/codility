#include <iostream>
#include <stack>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
int getNum(ListNode* node)
{
    ListNode* tmp = node;
    std::stack<int> elementsL1;
    int tens = 1;
    while(tmp != nullptr)
    {
        elementsL1.push(tmp->val * tens);
        tmp = tmp->next;
        tens *= 10;
    }

    int num = 0;
    while(!elementsL1.empty())
    {
        auto tmp = elementsL1.top();
        num += tmp;
        elementsL1.pop();
    }
    cout <<num <<endl;
    return num;
}

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
{
    ListNode* head = nullptr;
    ListNode* tail = nullptr;
    auto num1 = getNum(l1);
    auto num2 = getNum(l2);
    auto result = num1 + num2;
    int ten = 10;
    if(result == 0)
        return new ListNode(0);
    while(result != 0)
    {
        auto res = result % 10;
        result /= ten;
        ListNode* tmp = new ListNode(res);
        if(head == nullptr)
        {
            head = tmp;
            head->next = nullptr;
            tail = head;
        }
        else
        {
            tail->next = tmp;
            tail = tail->next;
        }
        cout <<res <<endl;
    }
    return head;
}

ListNode* getNum2(ListNode* node1, ListNode* node2)
{
    ListNode* head = nullptr;
    ListNode* tail = nullptr;
    ListNode* tmp1 = node1;
    ListNode* tmp2 = node2;
    int rest = 0;
    int tens = 0;
    int result = 0;
    while(nullptr != tmp1 or nullptr != tmp2)
    {
        int val1 =0, val2 = 0;
        if(tmp1 == nullptr)
            val1 = 0;
        else
            val1 = tmp1->val;
        if(tmp2 == nullptr)
            val2 = 0;
        else
            val2 = tmp2->val;
        
        auto result = val1 + val2;
        if(tens != 0)
            result += 1;
        if(result >= 10)
        {
            tens = result / 10;
            rest = result % 10;
            ListNode* tmp = new ListNode(rest);
            if(head == nullptr)
            {
                head = tmp;
                head->next = nullptr;
                tail = head;
            }
            else
            {
                tail->next = tmp;
                tail = tail->next;
            }
        }
        else
        {
            tens = 0;
            ListNode* tmp = new ListNode(result);
            if(head == nullptr)
            {
                head = tmp;
                head->next = nullptr;
                tail = head;
            }
            else
            {
                tail->next = tmp;
                tail = tail->next;
            }
        }
        if(tmp1 != nullptr)
            tmp1 = tmp1->next;
        else
            tmp1 = nullptr;
        if(tmp2 != nullptr)
            tmp2 = tmp2->next;
        else
            tmp2 = nullptr;
    }
    if(tens != 0)
    {
        result += 1;
        ListNode* tmp = new ListNode(result);
        if(head == nullptr)
        {
            head = tmp;
            head->next = nullptr;
            tail = head;
        }
        else
        {
            tail->next = tmp;
            tail = tail->next;
        }
    }
    return head;
}

int main()
{
    ListNode* n1 = new ListNode(3, nullptr);
    ListNode* n2 = new ListNode(4, n1);
    ListNode* n3 = new ListNode(2, n2);

    ListNode* t1 = new ListNode(4, nullptr);
    ListNode* t2 = new ListNode(6, t1);
    ListNode* t3 = new ListNode(5, t2);


    ListNode* tmp = getNum2(n3,t3);
    while(tmp != nullptr)
    {
        cout <<tmp->val;
        tmp = tmp->next;
    }

cout <<endl;
    ListNode* nz1 = new ListNode(0, nullptr);

    ListNode* tz1 = new ListNode(0, nullptr);


    ListNode* tmp1 = getNum2(nz1,tz1);
    while(tmp1 != nullptr)
    {
        cout <<tmp1->val;
        tmp1 = tmp1->next;
    }
    cout <<endl;

    ListNode* a1 = new ListNode(9, nullptr);
    ListNode* a2 = new ListNode(9, a1);
    ListNode* a3 = new ListNode(9, a2);
    ListNode* a4 = new ListNode(9, a3);
    ListNode* a5 = new ListNode(9, a4);
    ListNode* a6 = new ListNode(9, a5);
    ListNode* a7 = new ListNode(9, a6);

    ListNode* b1 = new ListNode(9, nullptr);
    ListNode* b2 = new ListNode(9, b1);
    ListNode* b3 = new ListNode(9, b2);
    ListNode* b4 = new ListNode(9, b3);

    ListNode* tmp2 = getNum2(a7,b4);
    while(tmp2 != nullptr)
    {
        cout <<tmp2->val;
        tmp2 = tmp2->next;
    }

    return 0;
}