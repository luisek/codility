#include <iostream>
#include <stack>
#include <string>

using namespace std;

int solution(string& S)
{
    if(')' == S[0] or '}' == S[0] or ']' == S[0])
        return 0;
    if(S.size() % 2 != 0)
        return 0;
    stack<char> chars;
    for(auto c : S)
    {
        if('(' == c)
            chars.push(c);
        if('[' == c)
            chars.push(c);
        if('{' == c)
            chars.push(c);
        if(')' == c)
        {
            auto s = chars.top();
            if('(' == s)
                chars.pop();
        }
        if(']' == c)
        {
            auto s = chars.top();
            if('[' == s)
                chars.pop();
        }
        if('}' == c)
        {
            auto s = chars.top();
            if('{' == s)
                chars.pop();
        }
    }

    return chars.empty() ? 1 : 0;
}


int main()
{
    std::string S{"{[()()]}"};
    std::cout <<solution(S) <<endl;
    std::string S1( "([)()]");
    std::cout <<solution(S1) <<endl;
    return 0;
}