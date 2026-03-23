#include <iostream>
#include <utility>
#include <vector>
#include <queue>
#define X second
#define Y first
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

	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < M; ++j)
		{
			cin >> Box[i][j];
			if (Box[i][j] == 1) Q.push({ i, j });
		}
	}

	while (!Q.empty())
	{
		auto Cur = Q.front(); Q.pop();
		for (int i = 0; i < 4; ++i)
		{
			int nx = Cur.X + dx[i];
			int ny = Cur.Y + dy[i];
			if (nx < 0 || ny < 0 || nx >= M || ny >= N) continue;
			if (Box[ny][nx] != 0) continue;
			
			// 최대 일자 계산을 위해 방문하지 않은 토마토만 이전 일자에 +1 처리
			if (Box[ny][nx] == 0)
			{
				Box[ny][nx] = Box[Cur.Y][Cur.X] + 1;
				Q.push({ ny, nx });
			}
		}
	}

	int MaxDay = 0;
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < M; ++j)
		{
			if (Box[i][j] == 0)	// 익지 않은 것에 대한 예외처리
			{
				cout << -1;
				return 0;
			}
			MaxDay = max(MaxDay, Box[i][j]);
		}
	}

	// 처음 시작이 1일차이므로 -1처리, 모든 토마토가 익어있다면 최대 1이므로 -1을 한 0이 출력됨.
	cout << MaxDay - 1;
}