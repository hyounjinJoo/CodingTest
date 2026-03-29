#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int N{}, M{};
	cin >> N >> M;
	vector<int> Tree(N);
	int Max = 0;
	for (int i = 0; i < N; ++i)
	{
		cin >> Tree[i];
	}
	sort(Tree.begin(), Tree.end());
	long long Low{}, High = Tree[N - 1];
	long long Result{};

	while (Low <= High)
	{
		long long Mid = (Low + High) / 2;
		long long Sum{};

		for (int i = 0; i < N; ++i)
		{
			if (Tree[i] > Mid) Sum += (Tree[i] - Mid);
		}

		if (Sum >= M)
		{
			Result = Mid;
			Low = Mid + 1;
		}
		else
		{
			High = Mid - 1;
		}
	}

	cout << Result;
}