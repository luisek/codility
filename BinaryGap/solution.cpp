int solution(int N)
{
	int counter{};
	int last{};
	int ret{};
	bool gapStart{ false };
	bool reset{ false };
	while (N / 2)
	{
		if (N % 2)
		{
			/*if (gapStart)
			reset = true;
			gapStart = true;*/
			counter = 0;
		}
		else
		{
			++counter;
			last = counter > last ? counter : last;
			/*if (!reset)
			{
			++counter;
			}
			else
			{
			if (counter > last)
			last = counter;
			counter = 1;
			reset = false;*/
			//		}
		}
		N = N / 2;
	}
	return last;
}