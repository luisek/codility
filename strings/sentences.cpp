#include <iostream>
#include <string>
#include <vector>
#include <cassert>
#include <algorithm>
using namespace std;


int solution(string& S)
{
    if(S.size() == 1 and (S[0] == '.' or S[0] == '!' or S[0] == '?'))
        return 0;
    vector<int> wordsInSentence;
    int word = 0;
    bool wordBegin = false;
    for(auto i = 0; i < S.size(); ++i)
    {
        if(S[i] != '.' and S[i] != '!' and S[i] != '?' and S[i] != ' ')
            wordBegin = true;
        if(S[i] == ' ')
        {
            if(wordBegin)
            {
                ++word;
                wordBegin = false;
            }
        }
        if(S[i] == '.' or S[i] == '?' or S[i] == '!')
        {
            if(wordBegin)
            {
                ++word;
                wordsInSentence.push_back(word);
                word = 0;
                wordBegin = false;
            }
        }
    }
    auto max = max_element(wordsInSentence.begin(), wordsInSentence.end());
    if(max != wordsInSentence.end())
        return *max;
    else
        return 0;
}

int main()
{
    string first{"The time to say goodby. Or maybe not?"};
    assert(5 == solution(first));
    string second{"The time. Or maybe not?"};
    assert(3 == solution(second));
    string oneWord{"."};
    assert(0 == solution(oneWord));
    string third{"... The. not? And all."};
    assert(2 == solution(third));
    return 0;
}