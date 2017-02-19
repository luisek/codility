#include <iostream>
#include <cstring>
using namespace std;

void algorytmKMP(const char* pattern, const char* text)
{
    auto patternLen = strlen(pattern);
    auto textLen = strlen(text);
    auto i = 0;
    
    while (i < textLen)
    {
        auto j = 0;
        while (pattern[j] == text[i + j] && pattern[j] != '\0' && text[i + j] != '\0')
            ++j;
        if (j == patternLen)
        {
            cout << i;
            i += j;
        }
        else
        {
            ++i;
        }
    }
}

int main(int argc, char* argv[])
{
    const char* pattern = "lala";
    const char* text = "lalalandlala";
    algorytmKMP(pattern, text);
    return 0;
}

