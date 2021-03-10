#include <iostream>
#include <vector>
#include <set>
using namespace std;

bool containsDuplicate(vector<int>& nums)
{
    if(nums.size() == 1)
        return false;

    set<int> rest;
    for(auto& i : nums)
    {
        auto ret = rest.find(i);
        if(ret != rest.end())
            return true;
        else
            rest.insert(i);
    }
    return false; 
}

int main()
{
    vector<int> nu1{1,2,3,1};
    cout <<containsDuplicate(nu1) <<endl;
    vector<int> nu2{1,2,3,4};
    cout <<containsDuplicate(nu2) <<endl;
    vector<int> nu3{1,2,3,1,1,2,1,1};
    cout <<containsDuplicate(nu3) <<endl;
    vector<int> nu4{1,3};
    cout <<containsDuplicate(nu4) <<endl;
    return 0;
}