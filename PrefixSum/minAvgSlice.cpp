#include <iostream>
#include <vector>
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
   0 1 2 3
  [2,3,1,4]
 0 1 2 3 4
[0,2,5,6,10]
p = 1; q = 2

sliceSum(1,A.size(), tab)
[0,2,5,6,10]
p = 1 q = 4
10 - 5 = 5

int sliceSum(int P, int Q, const vector<int>& Pref)
{
    return Pref[Q] - Pref[P+1];
}

int solution(vector<int>& A)
{

}

int main()
{
    return 0;
}