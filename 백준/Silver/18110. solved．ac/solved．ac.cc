#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int N{};
	cin >> N;
	vector<int> Opinion(N);
	int Difficult{};
	for (int i = 0; i < N; ++i)
	{
		cin >> Difficult;
		Opinion[i] = Difficult;
	}
	sort(Opinion.begin(), Opinion.end());

	int EraseCount = round(N * 0.15);
	long Sum{};
	for (int i = EraseCount; i < N - EraseCount; ++i)
	{
		Sum += Opinion[i];
	}
	long Answer = round(Sum / static_cast<double>(N - 2 * EraseCount));
    if (Sum == 0) Answer = 0;
	cout << Answer;
}