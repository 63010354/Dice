#include<iostream>
using namespace std;

int main()
{
	double dice;
	int lend, howLong[6], i, j = 0, k = 0;
	int top = 1, front = 2, left = 3, back = 5, right = 4, bottom = 6;
	char wayTodice[6][1000];

	cin >> dice;
	for (i = 0; i < dice; i++)
	{
		scanf("%s", &wayTodice[i]);
		howLong[i] = strlen(wayTodice[i]);
	}

	for (i = 0; i < dice; i++)
	{
		for (k = 0; k < howLong[i]; k++)
		{
			if (wayTodice[i][k] == 'F')
			{
				lend = top;
				top = back;
				back = bottom;
				bottom = front;
				front = lend;
			}
			else
				if (wayTodice[i][k] == 'B')
				{
					lend = top;
					top = front;
					front = bottom;
					bottom = back;
					back = lend;
				}
				else
					if (wayTodice[i][k] == 'L')
					{
						lend = top;
						top = right;
						right = bottom;
						bottom = left;
						left = lend;
					}
					else
						if (wayTodice[i][k] == 'R')
						{
							lend = top;
							top = left;
							left = bottom;
							bottom = right;
							right = lend;
						}
						else
							if (wayTodice[i][k] == 'C')
							{
								lend = front;
								front = right;
								right = back;
								back = left;
								left = lend;
							}
							else
								if (wayTodice[i][k] == 'D')
								{
									lend = front;
									front = left;
									left = back;
									back = right;
									right = lend;
								}
		}
		cout << front << " "; \
		top = 1, front = 2, left = 3, back = 5, right = 4, bottom = 6;
	}
}

