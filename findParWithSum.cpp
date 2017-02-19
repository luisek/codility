#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;



bool FindPairWithSum(const vector<int>& data, int sum)
{
    int low = 0;
    int hi = data.size() - 1;
    while (low < hi)
    {
        int elementsSum = data[low] + data[hi];
        if (elementsSum == sum)
            return true;
        if (elementsSum > sum)
        {
            if (data[hi] > sum)
                --hi;
        }   
        ++low;
    }
    return false;
}


bool hasPairWithSum(const vector<int> data, int sum)
{
    nordered_set<int> _set;
    for (const auto& value : data)
    {
        if (_set.find(value) != _set.end())
            return true;
        _set.insert(sum - value);
    }
    return false;
}

int main(int argc, char* argv[])
{
    vector<int> data{ 4,2,4,1,3 };
    vector<int> data1{ 1,2,3,9 };
    cout << hasPairWithSum(data, 8) << '\n';
    cout << hasPairWithSum(data1, 8) << '\n';
    return 0;
}
