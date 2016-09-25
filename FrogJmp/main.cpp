#include <iostream>

int solution(int X, int Y, int D)
{
	auto add{ 0 };
	Y % (X + D) ? add = 1 : add = 0;
	return (Y / (X + D)) + 1;
}

int main(int argc, char* argv[])
{
	std::cout << solution(10, 85, 30) << std::endl;
}