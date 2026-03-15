#include <iostream>
#include <vector>
#include <limits>

using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	vector<long> Numbers; Numbers.resize(10000001);
	for (long i = 0; i < 1000001; ++i) Numbers[i] = numeric_limits<long>::max();
	for (long i = 1; i < 1000001; ++i)
	{
		// 245 => 245 + 2 + 4 + 5 => 256의 생성자는 245이다.
		long Test = 0;
		Test += i;
		long Test2 = i;
		while (Test2)
		{
			Test += Test2 % 10;
			Test2 /= 10;
		}
		Numbers[Test] = min(Numbers[Test], i);
	}

	long Input{};
	cin >> Input;
	if (Numbers[Input] == numeric_limits<long>::max()) cout << 0;
	else
		cout << Numbers[Input];
}