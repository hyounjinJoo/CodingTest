#include <iostream>
#include <queue>
#include <utility>
int Box[101][101][101];
int dx[6] = { -1, 0, 1, 0, 0, 0 };
int dy[6] = { 0, -1, 0, 1, 0, 0 };
int dh[6] = { 0, 0, 0, 0, 1, -1 };
using namespace std;
struct Pos
{
	int h;
	int y;
	int x;
};
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	queue<Pos> Q;
	int M{}, N{}, H{};
	cin >> M >> N >> H;

	bool IsAlready = true;
	for (int i = 0; i < H; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			for (int k = 0; k < M; ++k)
			{
				cin >> Box[i][j][k];
				if (Box[i][j][k] == 0) IsAlready = false;
				if (Box[i][j][k] == 1) Q.push({i, j, k});
			}
		}
	}

	if (IsAlready)
	{
		cout << '0';
		return 0;
	}

	while (!Q.empty())
	{
		Pos Cur = Q.front();
		Q.pop();

		for (int i = 0; i < 6; ++i)
		{
			int Nh = Cur.h + dh[i];
			int Ny = Cur.y + dy[i];
			int Nx = Cur.x + dx[i];

			if (Nh < 0 || Nh >= H || Ny < 0 || Ny >= N || Nx < 0 || Nx >= M) continue;
			if (Box[Nh][Ny][Nx] == -1) continue;
			if (Box[Nh][Ny][Nx] == 0)
			{
				Box[Nh][Ny][Nx] = Box[Cur.h][Cur.y][Cur.x] + 1;
				Q.push({ Nh, Ny, Nx });
			}
		}
	}

	int MaxValue = -1;
	for (int i = 0; i < H; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			for (int k = 0; k < M; ++k)
			{
				if (Box[i][j][k] == 0)
				{
					cout << -1 << '\n';
					return 0;
				}
				MaxValue = max(MaxValue, Box[i][j][k]);
			}
		}
	}

	cout << MaxValue - 1 << '\n';
}