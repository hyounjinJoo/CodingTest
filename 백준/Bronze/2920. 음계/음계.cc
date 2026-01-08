#include <iostream>

using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	// 2 - 1 = 1
	// 7 - 8 = -1
	int Prev, Current, PrevDiff, Count = 8;
	Prev = Current = PrevDiff = 0;

	while (Count--)
	{
		cin >> Current;
		if (Prev == 0)
		{
			Prev = Current;
		}
		else
		{
			if (PrevDiff == 0) PrevDiff = Current - Prev;
			else
			{
				if (PrevDiff != Current - Prev)
				{
					PrevDiff = 0;
					break;
				}
			}

			Prev = Current;
		}
	}

	cout << (PrevDiff == 1 ? "ascending" : PrevDiff == -1 ? "descending" : "mixed") << '\n';

	return 0;
}