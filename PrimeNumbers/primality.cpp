#include <iostream>

using namespace std;

bool isPrime(int n)
{
    int64_t i = 2;
    while(i*i <= n)
    {
        if(n%i == 0)
        {
            return false;
        }
        i+=1;
    }
    return true;
}


int main()
{
    cout <<isPrime(9999);
    return 0;
}