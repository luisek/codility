#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
#include <cassert>
using namespace std;

int solution(vector<int>& A)
{
    int sum = 0;
    for(const auto& a : A)
    {
        sum += a;
    }
    unordered_set<int> minimals{};
    auto N = A.size() == 2 ? 1 : A.size();
    for(auto i = 0; i < N; ++i)
    {
        int sumJ = 0;
        for(auto j = 0; j < i + 1; ++j)
        {
            sumJ += A[j];
        }
        auto rest = sum - sumJ;
        auto sumP = abs(sumJ - rest);
        minimals.insert(sumP);
    }

    return *min_element(minimals.begin(),minimals.end());
}

int solution2(vector<int>& A) //92% ostatni test dv jest wciąż źle ...
{
    unordered_set<int> minimals;
    int sum = 0;
    int sumP = 0;
    for(const auto& a : A)
    {
        sum += a;
    }
    auto N = A.size() == 2? 1 : A.size();
    for(auto i = 0; i < N; ++i)
    {
        sumP += A[i];
        auto sumJ = sum - sumP;
        minimals.insert(abs(sumP - sumJ));
    }
    return *min_element(minimals.begin(), minimals.end());
}

int main()
{
    vector<int> av{3,1,2,4,3};
    vector<int> bv{-1000,1000};
    vector<int> cv{-2, -3, -4, -1};
    vector<int> dv{-10, -20, -30, -40, 100};
    assert(1 == solution2(av));
    cout <<"OK" <<'\n';
    assert(2000 == solution2(bv));
    cout <<"OK" <<'\n';
    assert(0 == solution2(cv));
    cout <<"OK" <<'\n';
    assert(20 == solution2(dv));
    cout <<"OK" <<'\n';

    return 0;
}