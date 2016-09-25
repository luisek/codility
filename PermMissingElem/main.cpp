#include <iostream>
#include <vector>
using namespace std;
int solution(vector<int> &A)
{
	int ret{0};
	auto total = (A.size() + 1)*(A.size() + 2) / 2;
	for (int i = 0; i < A.size(); ++i)
	{
		total -= A[i];
	}
	return total;
}

int main()
{
	vector<int> vect{2,3,1,5};
	cout << solution(vect);
	return 0;
}