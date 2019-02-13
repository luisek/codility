#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solution(vector<int>& arr)
{
    auto size = arr.size();
    for(auto i = 0; i < size / 2; ++i)
    {
        swap(arr[i], arr[size -1-i]);
    }
}

void solution(int* arr, size_t n)
{
    for(auto i = 0; i < n / 2; ++i)
    {
        std::swap(arr[i], arr[n - 1 - i]);
    }
}

void print_elements(int* arr, size_t n)
{
    for(auto it = 0; it < n; ++it)
    {
        cout <<arr[it] <<", ";
    }
    cout <<endl;
}

void print_vElements(const vector<int>& varr)
{
    for(const auto& c : varr)
    {
        cout <<c <<", ";
    }
    cout <<endl;
}

int main()
{
    int arr[6] = {1,2,3,4,5,6};
    size_t arrSize = sizeof(arr)/sizeof(*arr);
    solution(arr, arrSize);
    print_elements(arr, arrSize);
    int arr2[7] = {1,2,3,4,5,6,7};
    size_t arr2Size = sizeof(arr2)/sizeof(*arr2);
    solution(arr2, arr2Size);
    print_elements(arr2,arr2Size);

    vector<int> varr = {1,2,3,4,5,6};
    solution(varr);
    print_vElements(varr);

    vector<int> varr2 = {1,2,3,4,5,6,7};
    solution(varr2);
    print_vElements(varr2);

    reverse(varr2.begin(), varr2.end());
    print_vElements(varr2);
    

    return 0;
}