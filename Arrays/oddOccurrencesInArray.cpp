#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int solution(vector<int>& arr) //55%
{
    set<int> aset(arr.begin(), arr.end());

    for(const auto& c : aset)
    {
        auto num = count(arr.begin(),arr.end(), c);
        if(1 == num)
        {
            return c;
        }
    }
}

int solution2(vector<int>& arr)
{
    int ret = 0;
    for(const auto a : arr)
    {
        ret ^= a;
    }
    return ret;
}

int main()
{
    vector<int> arr{9,3,9,3,9,7,9};
    cout <<solution(arr) <<endl;
    cout <<solution2(arr) <<endl;

    return 0;
}