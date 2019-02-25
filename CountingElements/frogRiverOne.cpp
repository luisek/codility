#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_set>

int solution(int X, std::vector<int>& A) //27%
{
    for(auto i = X -1; i < A.size(); ++i)
    {
        if(A[i] == X)
        {
            std::unordered_set<int> asset(A.begin(), A.begin()+(i));
            auto n = asset.size();
            auto sum = (n * (n+1))/2;
            for(const auto& a : asset)
            {
                sum -= a;
            }
            if(sum == 0)
                return i;
        }
    }
    return -1;
}

int solution2(int X, std::vector<int>& A) //54%
{
    for(auto i = X - 1; i < A.size(); ++i)
    {
        std::unordered_set<int> asset(A.begin(), A.begin()+(i+1));
        auto n = asset.size();
        if(n == X)
        {
            auto sum = (n * (n+1))/2;
            for(const auto& a : asset)
            {
                sum -= a;
            }
            if(sum == 0)
                return i;
        }
    }
    return -1;
}

int solution3(int X, std::vector<int>& A) //54% performance 0% bez pętli można chyba to zrobić przypisać odrazu do set'a
{
    for(auto i = X - 1; i < A.size(); ++i)
    {
        std::unordered_set<int> asset(A.begin(), A.begin()+(i+1));
        auto n = asset.size();
        if(n == X)
        {
            return i;
        }
    }
    return -1;
}

int main(int argc, char* argv[])
{
    std::vector<int> arr{1,3,1,4,2,3,5,4};
    std::cout <<solution2(5,arr) <<std::endl;

    std::vector<int> arr2{1, 3, 1, 3, 2, 1, 3};
    std::cout<< solution2(3, arr2)<<std::endl;
    std::vector<int> arr3{1};
    std::cout<< solution2(1, arr3)<<std::endl;

    return 0;
}