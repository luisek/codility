#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

bool binarySearch(vector<int>& arr, int x)
{
    int left = 0;
    int right = arr.size() - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == x)
            return true;
        else if (x < arr[mid])
            right = mid - 1;
        else
            left = mid + 1;
    }
    return false;
}

int main(int argc, char* argv[])
{
    vector<int> a{1, 2, 3, 4, 5, 6};

    assert(true == binarySearch(a, 4));
    assert(false == binarySearch(a, 10));
    return 0;
}
