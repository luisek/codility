#include <iostream>
#include <list>
#include <algorithm>
#include <string>

using namespace std;

char doesRepeat(const string& word)
{
    char empty{' '};
    if(word.empty())
        return empty;
    list<char> chars;
    for(auto c: word)
    {
        auto fIter = find(chars.begin(), chars.end(), c);
        if(chars.end() != fIter)
            chars.erase(fIter);
        else
            chars.push_back(c);
    }
    if(chars.empty())
        return empty;
    return *chars.begin();
}


int main()
{
    cout <<doesRepeat("hello") <<endl;
    cout <<doesRepeat("swiss") <<endl;

    return 0;
}
