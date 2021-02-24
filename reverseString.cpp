#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void reverseS(string& text)
{
    if(0 == text.length())
        return;
    auto start = 0;
    auto end = text.length() - 1;
    cout <<end <<endl;
    while(start < end)
    {
        text[start] ^= text[end];
        text[end] ^= text[start];
        text[start] ^= text[end];
        ++start;
        --end;
    }
}

void reverse2(string& text)
{
    if(0 == text.length())
        return;

    auto start = 0;
    auto end = text.length()-1;

    while(start < end)
    {
        auto tmp = text[start];
        text[start] = text[end];
        text[end] = tmp;
        ++start;
        --end;
    }
}



int main(int argc, char* argv[])
{
    string a{"Ala ma kota"};
    string b{"beczka"};
    string c{"Papryka"};

    reverse(a.begin(),a.end());
    cout <<a <<endl;

    reverse2(b);
    cout <<b <<endl;

    reverseS(c);
    cout <<c <<endl;

    // cout <<reverse(a) <<endl;
    // cout <<reverse(b) <<endl;
    // cout <<reverse(c) <<endl;


    return 0;
}