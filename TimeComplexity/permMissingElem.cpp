#include <iostream>
#include <vector>
using namespace std;
int solution(vector<int> &A)
{
	auto total = (A.size() + 1)*(A.size() + 2) / 2;
	for(auto const& a : A)
	{
		total -= a;
	}
	return total;
}

int solution2(vector<int>& A)
{
	auto n = A.size() + 1;
	auto sum = (n*(n+1))/2;
	for(auto a: A)
	{
		sum -=a;
	}
	return sum;
}

int main()
{
	vector<int> vect{2,3,1,5};
	cout << solution2(vect) <<endl;
	return 0;
}