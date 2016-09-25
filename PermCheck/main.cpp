#include <iostream>
#include <vector>
#include<algorithm>
using std::cout;
using std::vector;

int solution(vector<int>&A)
{
	int ret{};
	std::sort(A.begin(), A.end());
	int r = (A[A.size() - 1] - A[0]) / (A.size() - 1);
	int rest = (A[A.size() - 1] - A[0]) % (A.size() - 1);
	ret = r > 0 && rest == 0 ? 1 : 0;
	return ret;
}

int main(int argc, char* argv[])
{
	vector<int> vect{ 1,2,3,4 };
	cout << solution(vect);
	return 0;
}