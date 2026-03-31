#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int Data[5];
	enum Case
	{
		T = 0,
		F,
		S,
		P,
		C
	};

	for (int i = 0; i < 2; ++i)
	{
		int Score = 0;
		for (int j = 0; j < 5; ++j)
		{
			cin >> Data[j];
			switch (j)
			{
			case T:
				Data[j] *= 6;
				break;
			case F:
				Data[j] *= 3;
				break;
			case S:
				Data[j] *= 2;
				break;
			case P:
				Data[j] *= 1;
				break;
			case C:
				Data[j] *= 2;
				break;
			}
			Score += Data[j];
		}

		cout << Score << ' ';
	}
}