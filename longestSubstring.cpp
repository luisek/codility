#include <iostream>
#include <string>

using namespace std;

int howManyDiff(int i, string s)
{
    int ret = 0;
    for(int j = i + 1; j < s.length(); ++j)
    {
        if(s[i] != s[j])
        {
            if(i >= 1)
            {
                auto subS = s.substr(i,i);
                if(string::npos != subS.find(s[j]))
                {
                    ret = 1;
                    break;
                }
            }
            ret = j+1;
            break;
        }
        else
        {
            ret = 0;
            break;
        }
    }
    return ret;
}

int lengthOfLongestSubstring(string s)
{
    int end_slice = 0;
    int slice = 0;
    int ret;
    if(s.empty())
        return 0;

    for(int i = 0; i < s.length(); ++i)
    {
        end_slice = max(1, howManyDiff(i, s));
        slice = max(slice, end_slice);
    }

    return slice;
}

int main()
{
    string s{"abcabcbb"};
    cout << lengthOfLongestSubstring(s) <<endl;
    string s1{"bbbbb"};
    cout << lengthOfLongestSubstring(s1) <<endl;

    string s2{""};
    cout << lengthOfLongestSubstring(s2) <<endl;

    string s3{"pwwkew"};
    cout << lengthOfLongestSubstring(s3) <<endl;
    return 0;
}
