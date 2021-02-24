#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

void numbersOfChars(const string& str)
{
    unordered_map<char, int> data;
    for(auto& c : str)
    {
        if (data.end() != data.find(c))
        {
            data[c] += 1;
        }
        else
        {
            data.insert(pair<char,int>(c, 1));
        }
    }

    for(const auto& [key, value] : data)
    {
        cout <<key <<" = " <<value <<endl;
    }
}

int main()
{
    //numbersOfChars("bbbaaaccc");
    numbersOfChars("abrakadabra");

    return 0;
}