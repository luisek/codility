#include <iostream>
#include "mergeTwoLists.hpp"

using namespace std;

void test_mergeTwoLists()
{
    ListNode l1c(4);
    ListNode l1b(3,&l1c);
    ListNode l1a(1,&l1b);

    ListNode l2c(5);
    ListNode l2b(2, &l2c);
    ListNode l2a(1, &l2b);

    auto val = solutionaRecursive(&l1a, &l2a);

    print(val);
    std::cout <<endl;

    ListNode la1c(4);
    ListNode la1b(3,&la1c);
    ListNode la1a(1,&la1b);

    ListNode la2c(5);
    ListNode la2b(2, &la2c);
    ListNode la2a(1, &la2b);

    auto val1 = inPlaceSolution(&la1a, &la2a);

    print(val1);
    std::cout <<endl;

    ListNode lb1c(4);
    ListNode lb1a(1, &lb1c);

    ListNode lb2c(5);
    ListNode lb2b(2, &lb2c);
    ListNode lb2a(1, &lb2b);

    auto val2 = inPlaceSolution(&lb1a, &lb2a);

    print(val2);
    std::cout <<endl;
}

int main()
{
    test_mergeTwoLists();

    return 0;
}