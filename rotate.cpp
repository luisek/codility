#include <iostream>
#include <vector>
#include <algorithm>

namespace mpb
{
    void rotate(std::vector<int>& arr, int newBegin)
    {
        newBegin--;
        if(arr.size() == newBegin)
            return;
        int j;
        for(int i = 0; i < newBegin; ++i)
        {
            for(const auto c : arr)
                std::cout <<c <<", ";
            std::cout <<'\n';
            int temp = arr[0];
            for(j = 0; j < arr.size() - 1; ++j)
            {
                arr[j] = arr[j+1];
            }
            arr[j] = temp;
        }
    }

    std::vector<int> rotateRight(std::vector<int>& arr, int k)
    {
        //--k;
        if(k == arr.size())
            return arr;
        for(auto rit = arr.rbegin(); rit != arr.rbegin() + k; ++rit)
        {
            for(auto c : arr)
                std::cout << c <<", ";
            std::cout <<std::endl;
            auto n_first = *rit;
            for(auto iter = arr.begin(); iter != arr.end() - 1; ++iter)
            {   
                auto rval = arr.rbegin();
                std::iter_swap(iter, rval);
            }
        }
        return arr;
    }
}


int main(int argc, char* argv[])
{
    std::vector<int> lvect{3, 8, 9, 7, 6};

    //std::rotate(lvect.begin(), lvect.begin() + 2, lvect.end());

    for(const auto& c : lvect)
    {
        std::cout << c <<", ";
    }
    std::cout <<'\n';
    std::cout <<"My rotate\n";

    mpb::rotateRight(lvect, 3);
//3,4,5,1,2 => 5,1,2,3,4
    for(const auto& c : lvect)
    {
        std::cout << c <<", ";
    }
    std::cout <<'\n';

    return 0;
}