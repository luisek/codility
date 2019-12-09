#include <iostream>
using namespace std;

int solution(int A, int B, int K)
{
    auto div = A % K;
    auto i = 0;
    int total = 0;
    if(0==div)
        i = A;
    else
        i = A + div;
    for(i; i <= B; i+= K)
    {
        ++total;
    }
    return total;
}

int main()
{
    cout <<solution(6,11,2) <<endl;
    return 0;
}