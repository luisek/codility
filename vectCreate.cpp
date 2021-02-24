#include <iostream>
#include <vector>
using namespace std;

void createV(vector<int>& A)
{
    auto iterA = A.begin();
    auto iterB = A.end();
    while(distance(iterA, iterB))
    {
        if(*iterA >= 0)
            ++iterA;
        else if(*iterA < 0)
        {
            --iterB;
            auto tmp = *iterA;
            *iterA = *iterB;
            *iterB = *iterA;
            --iterB;
            ++iterA;
        }
    }
    for(const auto c : A)
    {
        std::cout <<c <<' ';
    }
    std::cout <<std::endl;
}

int main()
{
    vector<int> a{1,2,-3,4,-5};
    createV(a);
    return 0;
}
