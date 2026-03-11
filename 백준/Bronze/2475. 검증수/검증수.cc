#include <iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	long long Numbers[5]{};
	for (int i = 0; i < 5; ++i)
	{
		cin >> Numbers[i];
		Numbers[i] = Numbers[i] * Numbers[i];
	}

	int result = 0;
	for (int i = 0; i < 5; ++i)
	{
		result += Numbers[i];
	}
	result %= 10;

	cout << result << '\n';
}