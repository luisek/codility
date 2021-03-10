#include <iostream>
#include <vector>
using namespace std;


int solution(int N)
{
    vector<int64_t> divisors;
    int i = 1;
    while (i * i < N)
    {
        if(N % i == 0)
        {
            divisors.push_back(i);
        }
        ++i;
    }
    if(i*i == N)
    {
        divisors.push_back(i);
    }

    int64_t min_perim = INT64_MAX;
    for(int64_t i : divisors)
    {
        int64_t b = N/i;
        int64_t permi = 2*(i + b);
        min_perim = min(min_perim, permi);
    }
    return min_perim;
}

int main()
{
    cout <<solution(30) <<endl;
    cout <<solution(15486451) <<endl;
    return 0;
}