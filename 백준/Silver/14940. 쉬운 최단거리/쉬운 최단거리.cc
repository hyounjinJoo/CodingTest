#include <iostream>
#include <queue>
#include <utility>
#include <vector>
#define X second
#define Y first
int dx[4]{ -1, 0, 1, 0 };
int dy[4]{ 0, -1, 0, 1 };

using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	vector<vector<int>> Map;
	int n{}, m{};
	cin >> n >> m;
	int TargetX{}, TargetY{};
	for (int i = 0; i < n; ++i)
	{
		vector<int> Line(m);
		for (int j = 0; j < m; ++j)
		{
			cin >> Line[j];
			if (Line[j] == 2) 
			{
				TargetX = j; TargetY = i;
			}
		}

		Map.push_back(Line);
	}

	vector<vector<int>> Weight(n, vector<int>(m, -1));
	queue<pair<int, int>> Q; Q.push({ TargetY, TargetX }); Weight[TargetY][TargetX] = 0;
	while (!Q.empty())
	{
		auto Cur = Q.front(); Q.pop();

		for (int i = 0; i < 4; ++i)
		{
			int ny = Cur.Y + dy[i];
			int nx = Cur.X + dx[i];

			if (nx < 0 || ny < 0 || nx >= m || ny >= n) continue;
			if (Map[ny][nx] == 0) continue;
			if (Weight[ny][nx] != -1) continue;

			Weight[ny][nx] = Weight[Cur.Y][Cur.X] + 1;
			Q.push({ ny, nx });
		}
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if (Weight[i][j] == -1)
			{
				if (Map[i][j] == 0) cout << 0 << ' ';
				else cout << -1 << ' ';
			}
			else cout << Weight[i][j] << ' ';
		}
		cout << '\n';
	}
}