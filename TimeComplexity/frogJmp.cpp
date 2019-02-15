#include <iostream>

int solution(int X, int Y, int D)
{
	if(Y <= X)
		return 0;
	auto jumps = (Y  - X) / D;
	if( (X + (jumps * D)) < Y )
		++jumps;
	return jumps;
}

int main(int argc, char* argv[])
{
	std::cout << solution(10, 85, 30) << std::endl;
	std::cout <<solution(1,1,3) <<std::endl;
}