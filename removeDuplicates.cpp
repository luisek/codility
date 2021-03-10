#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int removeDuplicates(vector<int>& nums)
{
    auto last = unique(nums.begin(), nums.end());
    nums.erase(last, nums.end());
    return nums.size();
}

int main()
{
    vector<int> n1{1,1,2};
    cout << removeDuplicates(n1) <<endl;
    for(auto i : n1)
    {
        cout <<i <<" ";
    }
    cout <<endl;
    vector<int> n2{0,0,1,1,1,2,2,3,4};
    cout << removeDuplicates(n2) <<endl;
    for(auto i : n2)
    {
        cout <<i <<" ";
    }
    cout <<endl;


    return 0;
}