#include <iostream>
#include <vector>

using namespace std;
vector<vector<int>> Board;
int N{};
int Blue{}, White{};

bool CheckAllSame(const int& X, const int& Y, const int& Size);

void Solve(int X, int Y, int Size)
{
	int Standard{ Board[Y][X] };
	if (CheckAllSame(X, Y, Size))
	{
		Standard == 1 ? ++Blue : ++White;
		return;
	}
	else
	{
		int Half = Size * 0.5;
		Solve(X, Y, Half);
		Solve(X + Half, Y, Half);
		Solve(X, Y + Half, Half);
		Solve(X + Half, Y + Half, Half);
	}
}


bool CheckAllSame(const int& X, const int& Y, const int& Size)
{
	int Standard{ Board[Y][X] };

	for (int i = Y; i < Y + Size; ++i)
	{
		for (int j = X; j < X + Size; ++j)
		{			
			if (Board[i][j] != Standard) return false;
		}
	}

	return true;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;
	for (int i = 0; i < N; ++i) Board.push_back(vector<int>(N));
	for (int i = 0; i < N * N; ++i) cin >> Board[i / N][i % N];

	Solve(0, 0, N);

	cout << White << '\n' << Blue;
}