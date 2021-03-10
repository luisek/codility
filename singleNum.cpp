#include <iostream>
#include <vector>

using namespace std;

int singleNum(vector<int>& nums)
{
    int tmp =0;
    for(auto& i : nums)
    {
        tmp ^= i;
        i ^= tmp;
    }
    return tmp;
}

int main()
{
    vector<int> num1{2,2,1};
    cout <<singleNum(num1) <<endl;
    vector<int> num2{2,1,2,1,4};
    cout <<singleNum(num2) <<endl;
    vector<int> num3{1};
    cout <<singleNum(num3) <<endl;
    return 0;
}