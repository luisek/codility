#include <iostream>
#include <vector>
using namespace std;

int64_t fibonacci(int64_t n)
{
    cout <<n <<' ';
    if(n <= 1)
    {
        return n;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

int64_t fibonacciDynamic(int n)
{
    vector<int64_t> fib(n+2,0);

    fib[1] = 1;
    for(auto i = 2; i < n+1; ++i)
    {
        fib[i] = fib[i-1] + fib[i-2];
    }
    return fib[n];
}

int main()
{
    cout <<fibonacci(90) <<endl;
    cout <<fibonacciDynamic(90) <<endl;
    return 0;
}
