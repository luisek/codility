#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int>& A)
{
    if(A.empty())
        return 0;
    sort(A.begin(), A.end());
    auto result = 1;
    for(auto i = 1; i < A.size(); ++i)
    {
        if(A[i-1] != A[i])
            ++result;
    }
    return result;
}

int main()
{
    vector<int> data{1,2,2,1,1,3};
    cout <<solution(data) <<endl;
    return 0;
}