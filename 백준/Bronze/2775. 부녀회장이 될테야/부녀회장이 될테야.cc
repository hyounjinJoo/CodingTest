#include <iostream>
#include <vector>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	// a층의 b호에 살려면 (a-1)층의 1호부터 b호까지 사람들의 수의 합만큼 사람들을 데려와 살아야 한다.
	// 아파트는 0층부터 있고 각층은 1호부터 있으며 0층의 i호에는 i명이 산다.
	vector<vector<int>> Rooms;
	Rooms.resize(15);
	for (int i = 0; i < 15; ++i)
	{
		Rooms[i].resize(15);
	}
	for (int i = 0; i < 15; ++i)
	{
		Rooms[0][i] = i + 1;
	}

	for (int i = 1; i < 15; ++i)
	{
		for (int j = 0; j < 15; ++j)
		{
			for (int k = 0; k <= j; ++k)
				Rooms[i][j] += Rooms[i - 1][k];
		}
	}

	int Count{};
	cin >> Count;
	int k{}, n{};
	while (Count--)
	{
		cin >> k >> n;
		cout << Rooms[k][n - 1] << '\n';
	}
}