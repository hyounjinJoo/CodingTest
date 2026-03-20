
#include <iostream>
#include <vector>
#include <utility>
#include <limits>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int N{}, M{};
	cin >> N >> M;
	vector<vector<char>> Board(N, vector<char>(M));
	char Ch{};
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < M; ++j)
		{
			cin >> Ch;
			Board[i][j] = Ch;
		}
	}


	// 시작점 찾기
	vector<pair<int, int>> StartPosition;
	// 
	for (int i = 0; i < N; ++i)
	{
		if (N - i > 7)
		{
			for (int j = 0; j < M; ++j)
			{
				if (M - j > 7)
				{
					StartPosition.push_back({ i, j });
				}
			}
		}
	}

	int MinRePainting{ numeric_limits<int>::max() };
	for (const auto& Pos : StartPosition)
	{
		int StartY = Pos.first; int LimitY = StartY + 8;
		int StartX = Pos.second; int LimitX = StartX + 8;

		int CountFromW = 0;
		int CountFromB = 0;
		for (int i = StartY; i < LimitY; ++i)
		{
			for (int j = StartX; j < LimitX; ++j)
			{
				char CurLetter = Board[i][j];
				if ((i + j) % 2 == 0)
				{
					if (CurLetter == 'W') CountFromB++;
					else if (CurLetter == 'B') CountFromW++;
				}
				else
				{
					if (CurLetter == 'W') CountFromW++;
					else if (CurLetter == 'B') CountFromB++;
				}
			}
		}
		MinRePainting = min(MinRePainting, min(CountFromW, CountFromB));
	}

	cout << MinRePainting;
}