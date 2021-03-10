#include <iostream>
#include <vector>
using namespace std;

 vector<int> plusOne(vector<int>& digits)
 {
     int i = 1;
     int number = 0;
     for(auto revIter = digits.rbegin(); revIter != digits.rend(); ++revIter)
     {
         number += *revIter * i;
         if(i == 1)
            number += 1;
         i*= 10;
     }
     cout <<number <<endl;

     vector<int> ret;
     while(number != 0)
     {
         auto it = ret.begin();
         auto digit = number % 10;
         number /=10;
         ret.insert(it,digit);
     }
     return ret;
 }
 void print(vector<int>& vc)
 {
     for(const auto& a : vc)
     {
         cout <<a <<',';
     }
     cout <<endl;
 }

int main()
{
    vector<int> v1{9};
    auto tmp1 = plusOne(v1);
    print(tmp1);
    vector<int> v2{1,2,3};
    auto tmp2 = plusOne(v2);
    print(tmp2);
    vector<int> v3{4,3,2,1};
    auto tmp3 = plusOne(v3);
    print(tmp3);
    vector<int> v4{0};
    auto tmp4 = plusOne(v4);
    print(tmp4);
    vector<int> v5{9,8,7,6,5,4,3,2,1,0};
    auto tmp5 = plusOne(v5);
    print(tmp5);

    return 0;
}