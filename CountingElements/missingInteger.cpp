#include <iostream>
#include <vector>
#include <algorithm>

#include <cassert>
using namespace std;

int solution(vector<int>& A)
{
    sort(A.begin(), A.end());
    for(auto i = 0; i < A.size(); ++i)
    {

    }

    return 0;
}

int main()
{
    vector<int> arr{1,3,6,4,1,2};
    assert(5 == solution(arr));

    vector<int> arr2{1,2,3};
    assert(4 == solution(arr2));

    vector<int> arr3{-1,-3};
    assert(0 == solution(arr3));

    return 0;
}