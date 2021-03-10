#include <unordered_map>
#include <vector>
#include <iostream>
using namespace std;


vector<int> twoSum(vector<int>& nums, int target) 
{
    unordered_map<int, int> results;
    vector<int> result;
    
    for(int i = 0; i < nums.size(); ++i)
    {
        int searched = target - nums[i];
        auto toFind = results.find(searched);
        if(results.end() != toFind)
        {
            result.push_back(toFind->second);
            result.push_back(i);
            break;
        }
        results.insert({nums[i], i});
    }
    return result;
}

int main()
{
    vector<int> tmp{2,7,11,15};
    auto res = twoSum(tmp, 9);
    for(auto i : res)
    {
        cout <<i;
    }
    return 0;
}