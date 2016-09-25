#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main(int argc, char* argv[])
{
	int k;
	cin >> k;
	while (k)
	{
		string str;
		cin >> str;
		for (auto i = 0; i < str.size() / 2; i += 2)
			cout << str[i];
		cout << endl;
		--k;
	}
	return 0;
}