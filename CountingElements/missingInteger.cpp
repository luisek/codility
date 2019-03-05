#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

#include <cassert>
using namespace std;

int solution(vector<int>& A) //55%
{
    set<int> asset(A.begin(), A.end());
    auto rbegin = asset.rbegin();
    if(*rbegin <=0)
        return 1;
    auto index = 1;
    for(const auto& a : asset)
    {
        if(a != index)
            return index;
        ++index;
        
    }
    return index;
}

int main()
{
    vector<int> arr{1,3,6,4,1,2};
    assert(5 == solution(arr));

    vector<int> arr2{1,2,3};
    assert(4 == solution(arr2));

    vector<int> arr3{-1,-3};
    assert(1 == solution(arr3));

    return 0;
}