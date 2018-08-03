int solution(int N)
{
	int counter{};
	int last{};
	while (N / 2)
	{
		if (N % 2)
		{
			counter = 0;
		}
		else
		{
			++counter;
			last = counter > last ? counter : last;
		}
		N = N / 2;
	}
	return last;
}
