
#include <iostream>
#include <utility>
#include <algorithm>
#include <vector>
using namespace std;
bool Compare(const pair<int, int>& Left, const pair<int, int>& Right)
{
	bool Result{ false };
	if (Left.second < Right.second) Result = true;
	else if (Left.second == Right.second && Left.first < Right.first) Result = true;

	return Result;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int N{};
	cin >> N;
	vector<pair<int, int>> Positions;
	int X{}, Y{};
	for (int i = 0; i < N; ++i)
	{
		cin >> X >> Y;
		Positions.push_back({ X, Y });
	}
	sort(Positions.begin(), Positions.end(), Compare);

	for (const auto& Pos : Positions)
	{
		cout << Pos.first << ' ' << Pos.second << '\n';
	}
}