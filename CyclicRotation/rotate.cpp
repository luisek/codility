#include <iostream>
#include <vector>

using namespace std;

vector<int> solution(vector<int>& A, int K)
{
	auto n_first = A[K - 1];
	auto next = n_first;
	auto first = A[0];
	while (first != next)
	{
		std::swap(first, next);
	}

}

int main(int argc, char* argv[])
{

}