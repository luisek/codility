#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>
#include <unordered_set>

int solution(std::vector<int>& A) //75%
{
    auto n = A.size();
    int sum = (n * (n + 1))/2;
    for(auto const& a : A)
    {
        sum -= a;
    }
    return sum == 0 ? 1 : 0;
}

int solution2(std::vector<int>& A) //100% O(N) or O(N * log(N))
{
    std::sort(A.begin(), A.end());
    auto index = 1;
    for(auto i = A.begin(); i != A.end(); ++i, ++index)
    {
        if ( 0 != *i - index)
            return 0;
    }
    return 1;
}

int solution3(std::vector<int>& A) //100% O(N) or O(N * log(N))
{
    auto n = A.size();
    std::unordered_set<int> aset(A.begin(),A.end());
    int sum = (n * (n + 1))/2;
    for(auto const& a : aset)
    {
        sum -= a;
    }
    return sum == 0 ? 1 : 0;
}

int main(int argc, char* argv[])
{
    std::vector<int> arr1{4,1,3,2};
    std::cout <<solution3(arr1) <<std::endl;
    std::vector<int> arr2{4,1,3};
    std::cout <<solution3(arr2) <<std::endl;
    std::vector<int> arr3{1,4,1};
    assert(0 == solution3(arr3));
    std::cout <<"test 3 OK" <<std::endl;
    return 0;
}