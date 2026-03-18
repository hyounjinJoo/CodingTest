
#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>
using namespace std;

bool Compare(const pair<int, string>& Left, const pair<int, string>& Right)
{
	return Left.first < Right.first;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	vector<pair<int, string>> Members;
	int Count{};
	cin >> Count;
	for (int i = 0; i < Count; ++i)
	{
		int Age{};
		cin >> Age;
		string Name{};
		cin >> Name;

		Members.push_back(make_pair(Age, Name));
	}

	std::stable_sort(Members.begin(), Members.end(), Compare);

	for (const pair<int, string>& Member : Members)
	{
		cout << Member.first << ' ' << Member.second << '\n';
	}
}