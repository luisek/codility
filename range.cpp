#include <iostream>
#include <vector>

template <typename T>
std::vector<T> range(int start, int stop, T step)
{
    std::vector<T> ret;
    ret.reserve(stop-start);
    T num = static_cast<T>(start);
    for(auto i = start; i < stop; ++i, num+=step)
    {
        ret.emplace_back(num);
    }
    return move(ret);
}

int main(int argc, char* argv[])
{
    std::vector<int> my1 = range<int>(0,10,2);

    for(const auto& c : my1)
    {
        std::cout <<c <<',';
    }
    std::cout <<std::endl;

     std::vector<float> my2 = range<float>(0,10,2.2);

    for(const auto& c : my2)
    {
        std::cout <<c <<',';
    }
    std::cout <<std::endl;
    return 0;
}
