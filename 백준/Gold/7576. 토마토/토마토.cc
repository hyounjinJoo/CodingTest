#include <queue>
#include <utility>
#include <iostream>
using namespace std;
#define X first
#define Y second
int Board[1002][1002];
int Dist[1002][1002];
int N, M;
int Dx[4] = { 1, 0, -1, 0 };
int Dy[4] = { 0, 1, 0, -1 };
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> M >> N;
	queue<pair<int, int>> Q;
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < M; ++j)
		{
			cin >> Board[i][j];
			if (Board[i][j] == 1)
				Q.push({ i, j });
			if (Board[i][j] == 0)
				Dist[i][j] = -1;
		}
	}

	while (!Q.empty())
	{
		auto Cur = Q.front(); Q.pop();
		for (int Dir = 0; Dir < 4; ++Dir)
		{
			int Nx = Cur.X + Dx[Dir];
			int Ny = Cur.Y + Dy[Dir];

			if (Nx < 0 || Nx >= N || Ny < 0 || Ny >= M) continue;
			if (Dist[Nx][Ny] >= 0) continue;
			Dist[Nx][Ny] = Dist[Cur.X][Cur.Y] + 1;
			Q.push({ Nx, Ny });
		}
	}
	int Ans = 0;
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < M; ++j)
		{
			if (Dist[i][j] == -1)
			{
				cout << -1;
				return 0;
			}
			Ans = max(Ans, Dist[i][j]);
		}
	}

	cout << Ans;

	return 0;
}