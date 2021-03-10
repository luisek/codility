#include <iostream>
#include <vector>
#include <cstddef>

using namespace std;

bool solution(vector<int>& c)
{
    vector<char> numbers(10, '\0');

    for(auto a : c)
    {
        auto index = a / 8; //9 -> index[1]
        auto bitPos = a % 8; // 9 -> '1000 0000'
        auto num = numbers[index];
        auto currentBitVal = (num >> bitPos) & 1U;
        if (1 == currentBitVal)
        {
            return true;
        }
        else
        {
            auto value = numbers[index];
            value |= '1' << bitPos;
            numbers[index] = value;
        }
    }

    return false;
}


int main()
{
    vector<int> nn{1,2,11,4,5,40,11};
    cout <<solution(nn) <<endl;
    return 0;
}