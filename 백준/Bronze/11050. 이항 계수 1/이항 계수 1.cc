#include <iostream>
#include <vector>

using namespace std;
int BinomailCoefficient(const int& N, const int& K)
{
	vector<vector<int>> DP(N + 1, vector<int>(K + 1, 0));

	for (int i = 0; i <= N; ++i)
	{
		for (int j = 0; j <= min(i, K); ++j)
		{
			if (j == 0 || j == i) DP[i][j] = 1;
			else DP[i][j] = DP[i - 1][j - 1] + DP[i - 1][j];
		}
	}

	return DP[N][K];
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int N{}, K{};
	cin >> N >> K;
	cout << BinomailCoefficient(N, K) << '\n';
}