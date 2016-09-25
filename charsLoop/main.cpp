#include <iostream>

int main(int argc, char* argv[])
{
	for (char c; std::cin >> c;)
		std::cout << "Wartoœæ znaku '" << c << "' to " << int{ c } <<std::endl;
	return 0;
}