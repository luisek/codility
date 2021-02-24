#include <iostream>

int counts(int a)
{
    int ui = a;
    auto counter = 0;
    while(ui)
    {
        counter += ui & 1;
        ui >>= 1;
    }
    return counter;
}

int main(int argc, char* argv[])
{
    std::cout <<counts(22) <<'\n';
    std::cout <<counts(9) <<'\n';
    std::cout <<counts(-1) <<'\n';
    return 0;
}
