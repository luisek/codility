#include <string>
#include <iostream>
using namespace std;

void perm(string prm, string word)
{
    cout <<__PRETTY_FUNCTION__ <<prm <<", " <<word <<endl;
    if(word.empty())
        cout <<prm + word <<endl;
    else
    {
        for(auto i = 0; i < word.length(); ++i)
            perm(prm + word[i], word.substr(0, i) + word.substr(i + 1, word.length()));
    }
}

void permutation(string word)
{
    perm("", word);
}


int main()
{
    permutation("123");
    return 0;
}