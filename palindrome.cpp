#include <iostream>
#include <string>

using namespace std;

bool isStringPalindrome(const std::string& s)
{
    auto len = s.length() - 1;
    auto i = 0;
    while( i < len)
    {
        if(s[i++] != s[len--])
            return false;
    }
    return true;
}

bool isNumberPalindrome(int n)
{
    int digit, rev = 0;
    int num = n;
    do
    {
        digit = n % 10;
        rev = (rev * 10) + digit; 
        n /= 10;
    } while (n != 0);
    return rev == num ? true : false;
}

int main()
{

    cout <<"Palindorem : abba " <<boolalpha <<isStringPalindrome("abba") <<'\n';
    cout <<"Palindorem : aba " <<boolalpha <<isStringPalindrome("aba") <<'\n';
    cout <<"Palindorem : abc " <<boolalpha <<isStringPalindrome("abc") <<'\n';

    cout <<"Palindorem : 121 " <<boolalpha <<isNumberPalindrome(121) <<'\n';
    cout <<"Palindorem : 123 " <<boolalpha <<isNumberPalindrome(123) <<'\n';
    cout <<"Palindorem : 121121 " <<boolalpha <<isNumberPalindrome(121121) <<'\n';

    return 0;
}
