#include <iostream>
#include <vector>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	vector<int> Numbers; Numbers.resize(1001);
	// 소수 -> 1과 자기 자신만을 약수로 가진 수
	for (int i = 0; i < 1001; ++i)
	{
		Numbers[i] = i;
	}

	Numbers[1] = 0;
	for (int i = 1; i < 1001; ++i)
	{
		for (int j = 2; j <= Numbers[i] * 0.5; ++j)
		{
			if (Numbers[i] % j == 0)
			{
				Numbers[i] = 0;
				break;
			}
		}
	}

	int N{}, Prime{};
	cin >> N;
	for (int i = 0; i < N; ++i)
	{
		int Test{};
		cin >> Test;
		if (Numbers[Test] != 0) ++Prime;
	}

	cout << Prime;
}