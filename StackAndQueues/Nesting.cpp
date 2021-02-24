#include <iostream>
#include <string>
#include <stack>

using namespace std;
//12%
int solution(const string &S)
{
    int openB = 0, endB =0;
    auto size = S.length();
    if(size % 2 != 0)
    {
        return 0;
    }
    for(auto i = 0; i < size; ++i)
    {
        if (S[i] == '(')
            ++openB;
        if (S[i] == ')')
            ++endB;
    }
    return openB == endB? 1 : 0;
}
//100%
int solution2(const string &S)
{
    std::stack<char> elements{};
    if(S.empty())
        return 1;
    if(')' == S[0])
        return 0;
    if((S.size() % 2) != 0)
        return 0;
    for(auto i = 0; i < S.size(); ++i)
    {
        if('(' == S[i])
        {
            elements.push(S[i]);
        }
        else if(')' == S[i] && !elements.empty())
        {
            elements.pop();
        }
    }
    if(elements.empty())
        return 1;
    else 
        return 0;
}

int main(int argc, char* argv[])
{
    cout <<solution2("(()") <<'\n';
    cout <<solution2("((()))") <<'\n';
    cout <<solution2("()(()") <<'\n';
    cout <<solution2(")()()") <<'\n';
    cout <<solution2("())") <<'\n';
    cout <<solution2("") <<'\n';
    cout <<solution2("(()(())())") <<'\n';

    return 0;
}
