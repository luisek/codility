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
    /*cout <<"tab passed elem\n";
     for(const auto& i : P)
        cout <<i <<',';
    cout <<endl;
    cout <<"passedElement: " <<P[P.size()] <<endl;
    cout <<"size: " <<P.size() <<endl; */
    return P[P.size() - 1];
}

int solution(vector<int>& A)
{
    int result = 0;
    auto iterFirst = find(A.begin(), A.end(), 0);
    auto iterLast = A.end();
    while(iterFirst != A.end())
    {
        if(result > 1000000000)
            return -1;
        vector<int> tmp(iterFirst, iterLast);
        /* for(const auto& i : tmp)
            cout <<i <<',';
        cout <<endl; */
        result += passedElement(tmp);
        auto newIter = ++iterFirst;
        iterFirst = find(newIter, iterLast, 0);
    }
    return result;
}

int main(int argc, char* argv[])
{
    vector<int> tmp = {0,1,0,1,1};
    cout << solution(tmp) <<endl;
    vector<int> tmp2 = {1,0,1,1,1,0,1,1,0};
    cout << solution(tmp2) <<endl;
    return 0;
}
