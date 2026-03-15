#include <iostream>
#include <vector>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int N{};
	long M{}, Number{};
	vector<long> Cards;
	cin >> N >> M;
	for (int i = 0; i < N; ++i)
	{
		cin >> Number;
		Cards.push_back(Number);
	}

	long Closest = 0;
	for (int i = 0; i < N - 2; ++i)
	{
		for (int j = i + 1; j < N - 1; ++j)
		{
			for (int k = j + 1; k < N; ++k)
			{
				long Current = Cards[i] + Cards[j] + Cards[k];

				if (Current <= M && Current > Closest)
				{
					Closest = Current;
				}
			}
		}
	}

	cout << Closest;
}