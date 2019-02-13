#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int>& A, int K)
{
    if(A.size() == K or A.empty())
        return A;
    auto N = A.size() - 1;
    while(K)
    {
        auto first = A[N];
        for(auto i = N; i > 0; --i)
        {
            A[i] = A[i-1];
        }
        A[0] = first;
        --K;
    }
    return A;
}

vector<int> solution2(vector<int>&A, int K)
{
    rotate(A.begin(), A.begin() + K -1, A.end());
    return A;
}

int main()
{
    vector<int> A{3,8,9,7,6};
    solution(A,3);

    for(const auto& a : A)
    {
        cout <<a <<',';
    }
    cout <<endl;

    vector<int> A2{3,8,9,7,6};
    solution2(A2,3);
    for (const auto& a : A2)
    {
        cout <<a <<", ";
    }
    cout <<endl;
    return 0;
}