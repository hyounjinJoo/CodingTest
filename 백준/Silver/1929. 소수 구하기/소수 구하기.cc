#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int MAXIDX = 1000001;
	vector<int> V(MAXIDX);
	for (int i = 2; i < MAXIDX; ++i)
	{
		V[i] = i;
	}

	int Limit = MAXIDX * 0.5;
	for (int i = 2; i <= Limit; ++i)
	{
		for (int j = 2; i <= Limit; ++j)
		{
			if (i * j >= MAXIDX) break;
			V[i * j] = 0;
		}
	}

	int M{}, N{};
	cin >> M >> N;
	for (int i = M; i <= N; ++i)
	{
		if (V[i] != 0) cout << V[i] << '\n';
	}
}