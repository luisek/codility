#include <iostream>
#include <vector>
using namespace std;

vector<int>& counting(vector<int>& A, int m)
{
	vector<int> vect( m, 0 );
	for (auto i = 0; i < A.size(); ++i)
	{
		vect[A[i]] += 1;
	}
	return vect;
}

int main(int argc, char* argv[])
{
	vector<int> A{0,1,1,2,1,1,2};
	vector<int> newV = counting(A, A.size() + 1);
	for (auto& i : newV)
		cout << i <<'\n';
	return 0;
}