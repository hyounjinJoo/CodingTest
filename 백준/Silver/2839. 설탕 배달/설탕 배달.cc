#include <iostream>
#include <vector>
#include <limits>
#include <utility>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int Kg{};
	cin >> Kg;
	vector<vector<pair<int, int>>> Table;
	Table.resize(1001);
	int TotalBag = numeric_limits<int>::max();
	for (int i = 0; i < 1001; ++i) Table[i].resize(1667);
	for (int i = 0; i < 1001; ++i)
	{
		for (int j = 0; j < 1667; ++j)
		{
			Table[i][j].second = j * 3 + i * 5;
			Table[i][j].first = j + i;

			if (Kg == Table[i][j].second)
			{
				TotalBag = min(TotalBag, Table[i][j].first);
			}
		}
	}

	if (TotalBag > 5000) TotalBag = -1;

	cout << TotalBag;	
}