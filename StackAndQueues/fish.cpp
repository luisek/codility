#include <iostream>
#include <stack>
#include <vector>
#include <utility>

using namespace std;

int solution(vector<int>& A, vector<int>& B)
{
    stack<pair<int,int>> stays;
    for(auto i = 0; i < B.size(); ++i)
    {
        if( stays.empty())
        {
            stays.push(make_pair(A[i], B[i]));
        }
        else
        {
            auto value = stays.top();
            if(value.second == 1 and B[i] == 0)
            {
                if(value.first < A[i])
                {
                    stays.pop();
                    stays.push(make_pair(A[i], B[i]));
                }
            }
            else
                stays.push(make_pair(A[i], B[i]));
        }
    }
    return stays.size();
}

int main(int argc, char* argv[])
{
    vector<int> A{4,3,2,1,5};
    vector<int> B{0,1,0,0,0};
    cout <<solution(A, B) <<endl;
    vector<int> A1{0, 1};
    vector<int> B1{1, 1};
    cout <<solution(A1, B1) <<endl;
    vector<int> B2{1,0,0,0,0,0,0,0,0,0,0,0,0,0};
    vector<int> A2{7,2,2,2,2,2,2,2,2,2,2,2,2,2};
    cout <<solution(A2, B2) <<endl;

    vector<int> B3{1,0,0,0,0,0,0,0,0,0,0,0,0,0};
    vector<int> A3{1,2,2,2,2,2,2,2,2,2,2,2,2,2};
    cout <<solution(A3, B3) <<endl;


    return 0;
}
