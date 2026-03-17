#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool Rule(const string& Left, const string& Right)
{
	size_t LengthL{ Left.length() }, LengthR{ Right.length() };
	if (LengthL != LengthR)
	{
		return LengthL < LengthR;
	}

	for (size_t i = 0; i < LengthL; ++i)
	{
		if (Left[i] == Right[i]) continue;
		return Left[i] < Right[i];
	}

	return false;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int InputCount{};
	cin >> InputCount;

	vector<string> Strs(InputCount);
	for (int i = 0; i < InputCount; ++i) cin >> Strs[i];
	sort(Strs.begin(), Strs.end(), Rule);

	string* BeforeOutput{nullptr};
	for (int i = 0; i < InputCount; ++i)
	{
		if (BeforeOutput && (*BeforeOutput) == Strs[i]) continue;
		cout << Strs[i] << '\n';
		BeforeOutput = &Strs[i];
	}
}