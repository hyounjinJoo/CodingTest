#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;

bool Compare(const pair<int, int>& Left, const pair<int, int>& Right)
{
	bool Result = false;
	if (Left.first < Right.first) Result = true;
	else if (Left.first == Right.first && Left.second < Right.second) Result = true;

	return Result;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int N{};
	cin >> N;
	vector<pair<int, int>> Positions;
	int x{}, y{};

	for (int i = 0; i < N; ++i)
	{
		cin >> x >> y;
		Positions.push_back({ x, y });
	}
	sort(Positions.begin(), Positions.end(), Compare);

	for (const auto& Pos : Positions)
	{
		cout << Pos.first << ' ' << Pos.second << '\n';
	}
}