#include <iostream>
#include <string>
#include <list>
#include <algorithm>
using namespace std;

void reverseWords(string& text)
{
    if(text.empty())
        return;
    reverse(text.begin(), text.end());

}

void reverseWords2(const string& text)
{
    if(text.empty())
        return;
    for(auto it = text.rbegin(); it != text.rend(); ++it)
    {
        cout <<*it;
    }
}

// void reverseWords2(const string& text)
// {
//     if(text.empty())
//         return;
//     auto posSpace = text.find(' ');
//     do
//     {
//         auto word = text.substr()
//     } while (posSpace != text.end());
    
// }

bool rotation(string a, string b)
{
    if(a.length() != b.length())
        return false;
    for(auto c : a)
    {
        auto lastInB = b.back();
        if(c != lastInB)
            return false;
        b.pop_back();
    }
    return true;
}



int main()
{
    cout <<std::boolalpha <<rotation("ala", "ala") <<endl;
    cout <<std::boolalpha <<rotation("ala", "alas") <<endl;
    cout <<std::boolalpha <<rotation("ala", "kot") <<endl;
    cout <<std::boolalpha <<rotation("dupa", "apud") <<endl;
    return 0;
}