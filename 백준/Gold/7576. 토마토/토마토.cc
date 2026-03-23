// 7576 복습
#include <iostream>
#include <utility>
#include <vector>
#include <queue>
#define X first
#define Y second
using namespace std;
int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, -1, 0, 1 };

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int M{}, N{};
	cin >> M >> N;
	vector<vector<int>> Box(N, vector<int>(M));
	queue<pair<int, int>> Q;

	bool IsAlready = true;
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < M; ++j)
		{
			cin >> Box[i][j];
			if (Box[i][j] == 0) IsAlready = false;
			if (Box[i][j] == 1) Q.push({ i, j });
		}
	}
	if (IsAlready)
	{
		cout << 0;
		return 0;
	}

	int Day = -1;
	while (!Q.empty())
	{
		++Day;
		int PerDayCan = Q.size();
		while (PerDayCan--)
		{
			auto Cur = Q.front(); Q.pop();
			for (int i = 0; i < 4; ++i)
			{
				int nx = Cur.Y + dx[i];
				int ny = Cur.X + dy[i];
				if (nx < 0 || ny < 0 || nx >= M || ny >= N) continue;
				if (Box[ny][nx] != 0) continue;
				Box[ny][nx] = 1;
				Q.push({ ny, nx });
			}
		}
	}

	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < M; ++j)
		{
			if (Box[i][j] == 0)
			{
				cout << -1;
				return 0;
			}
		}
	}

	cout << Day;
}