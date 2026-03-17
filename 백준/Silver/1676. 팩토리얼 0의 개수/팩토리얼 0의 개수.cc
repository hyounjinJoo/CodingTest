#include <iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int Value{};
	cin >> Value;

	int CountZero = 0;
	while (Value >= 5)
	{
		CountZero += (Value / 5);
		Value /= 5;
	}

	cout << CountZero;
}