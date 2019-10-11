#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> prefixSum(const vector<int>& A)
{
    vector<int> prefSum(A.size()+1,0);
    for(auto i = 1; i < prefSum.size(); ++i)
    {
        prefSum[i] = prefSum[i-1] + A[i-1];
    }
    return prefSum;
}

int passedElement(const vector<int>& A)
{
    vector<int> P(A.size()+1,0);
    for(auto i = 1; i < P.size(); ++i)
    {
        P[i] = P[i-1] + A[i-1];
    }
    return P[P.size()+1];
}

int solution(vector<int>& A)
{
    int result = 0;
    auto iterFirst = find(A.begin(), A.end(), 0);
    auto iterLast = A.end();
    while(iterFirst != A.end())
    {
        vector<int> tmp(iterFirst, iterLast);
        result += passedElement(tmp);
        auto newIter = ++iterFirst;
        iterFirst = find(tmp.begin(), iterLast);
    }
    return result;
}

int main(int argc, char* argv)
{
    return 0;
}
