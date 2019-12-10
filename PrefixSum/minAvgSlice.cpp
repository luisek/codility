#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

vector<int> prefixSum(const vector<int>& A)
{
    vector<int> prefSum(A.size()+1, 0);
    for(int i = 1; i < prefSum.size(); ++i)
    {
        prefSum[i] = prefSum[i-1] + A[i-1];
    }
    return prefSum;
}

/*
   0 1 2 3
  [2,3,1,4]
 0 1 2 3 4
[0,2,5,6,10]
p = 1; q = 2
*/

int sliceSum(int P, int Q, const vector<int>& Pref)
{
    return Pref[Q] - Pref[P+1];
}

int solution(vector<int>& A)
{
    int p=0, q = 1;
    auto vect = prefixSum(A);
    for(int p = 0, q = 1; q < A.size(); ++q, ++q)
    {
        for(; q < A.size(); ++q)
            cout << sliceSum(p, A.size()+1, vect) <<'\n';
    }
}

int main()
{
    vector<int> tmp{4,2,2,5,1,5,8};
    assert(1 == solution(tmp));
    return 0;
}