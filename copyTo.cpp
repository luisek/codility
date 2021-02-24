#include <iostream>
#include <vector>
#include <iterator>
#include <functional>

using namespace std;

template<typename InputIt>
void copyTo(InputIt& beg, InputIt& from, int var)
{
    while(var)
    {
        *beg = *from;
        from++;
        beg++;
        --var;
    }
}

template<typename InputIt>
void copyTo2(InputIt& beg, InputIt& from, std::function<bool(int)> cond)
{
    while(cond(*from))
    {
        *beg = *from;
        from++;
        beg++;
    }
}

int main()
{
    vector<int> iv{1,2,3,4,5,6,7,8};
    vector<int> iv2{11,12,13,14,15,16,17};
    cout <<"Before: ";
    for(const auto& c : iv)
    {
        cout <<c <<", ";
    }
    cout <<endl;
    auto it3 = iv.begin() + 2;
    auto it2Beg = iv2.begin();
    //copyTo(it3, it2Beg, iv2.size());
    copyTo2(it3, it2Beg, [](int b)->bool
    {
        if(b < 14)
            return true;
        else
            return false;
    });
     cout <<"After: ";
    for(const auto& c : iv)
    {
        cout <<c <<", ";
    }
    cout <<endl;

    cout <<sizeof(int) <<endl;
    return 0;
}