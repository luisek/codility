#include <iostream>
#include <cassert>
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
    if(A == B == K)
        return K;
    if (1 == K)
        return B-A;
    for(i; i <= B; i+= K)
    {
        ++total;
    }
    return total;
}

int main()
{
    assert(3 == solution(6,11,2));
    assert(2000000000 == solution(0,2000000000,1));
    cout << solution(101, 1234567891, 10000) <<endl;
    cout <<" int32 max: " <<INT32_MAX <<endl;
    assert(INT32_MAX == solution(0,INT32_MAX, 1));
    assert(1 == solution(1,1,1));
    assert(11 == solution(0,11,1));
    assert(1 == solution(0,11,11));
    return 0;
}