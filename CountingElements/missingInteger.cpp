#include <iostream>
#include <vector>
#include <unordered_set>
#include <cassert>
using namespace std;

int solution3(vector<int>& A)
{
    unordered_set<int> unset;
    for(const auto& a : A)
    {
        if(a > 0)
            unset.insert(a);
    }
    if(unset.size() == 0)
        return 1;
    if(unset.size() == 1)
    {
        auto value = *(unset.begin());
        if(value > 1)
            return 1;
    }
    int index = 1;
    for(;index < A.size(); ++index)
    {
        if(unset.end() == unset.find(index))
        {
            return index;
        }
    }
    return index+1;
}

int main()
{
    vector<int> arr{1,3,6,4,1,2};
    assert(5 == solution3(arr));

    vector<int> arr2{1,2,3};
    assert(4 == solution3(arr2));

    vector<int> arr3{-1,-3};
    assert(1 == solution3(arr3));

    vector<int> arr4{2};
    assert(1 == solution3(arr4));

    vector<int> arr5{20000};
    assert(1 == solution3(arr5));

    return 0;
}