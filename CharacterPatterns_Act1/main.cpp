#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	int t, l, c;
	char dot{ '.' }, star{ '*' };
	cin >> t;
	while (t)
	{
		cin >> l >> c;
		for (auto j = 0; j < l; ++j)
		{
			for (auto i = 0; i < c; ++i)
			{
				(i % 2) ? cout << star : cout << dot;
			}
		}
		--t;
	}
	return 0;
}