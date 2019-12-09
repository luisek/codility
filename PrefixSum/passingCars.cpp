#include <iostream>
#include <vector>

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

int solution(vector<int>& A)
{
    auto prefSum = prefixSum(A);
    auto N = A.size() - 1;
    int total = 0;
    for(int i = 0; i < A.size(); ++i)
    {
        if(0 == A[i])
        {
            total += prefSum[N + 1] - prefSum[i+1];
            if(total > 1000000000)
                return -1;
        }
    }
    return total;
}

int main(int argc, char* argv[])
{
    vector<int> tmp = {0,1,0,1,1};
    cout << solution(tmp) <<endl;
    vector<int> tmp2 = {1,0,1,1,1,0,1,1,0};
    cout << solution(tmp2) <<endl;
    vector<int> tmp3 = {1,0,1,1,0,1};
    cout << solution(tmp3) <<endl;
    return 0;
}
