#include <iostream>
#include <vector>

using namespace std;

int maxProfit(vector<int>& prices)
{
    int max_end = 0;
    int max_slice = 0;
    int maxes = 0;


    for(int i = 1; i < prices.size(); ++i)
    {
        max_end = max(0, prices[i] - prices[i-1]);
        max_slice = max(max_slice, max_end);
        maxes += max_end;
    }
    return maxes;
}

int main()
{
    vector<int> prices{7,1,5,3,6,4};
    cout <<maxProfit(prices);
    cout <<endl;

    vector<int> prices1{7,6,4,3,1};
    cout <<maxProfit(prices1);
    cout <<endl;
    
    vector<int> prices2{1,2,3,4,5};
    cout <<maxProfit(prices2);

    return 0;
}