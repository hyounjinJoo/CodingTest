#include <iostream>
#include <cmath>
using namespace std;
int PreCalc[101];
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	// 1 -> 1
	// 2 -> 4 + 1
	// 3 -> 9 + 4 + 1
	// 4 -> 16 + 9 + 4 + 1
	PreCalc[1] = 1;
	for (int i = 2; i < 101; ++i)
	{
		PreCalc[i] = pow(i, 2) + PreCalc[i - 1];
	}

	int N{};
	while (true)
	{
		cin >> N;
		if (N == 0) break;
		cout << PreCalc[N] << '\n';
	}
}