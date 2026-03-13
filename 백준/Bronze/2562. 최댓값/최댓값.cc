#include <iostream>
#include <array>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	array<int, 9> Arr{};
	int MaxValue = 0;
	int Index = 0;
	for (int i = 0; i < 9; ++i)
	{
		cin >> Arr[i];
		if (max(Arr[i], MaxValue) != MaxValue)
		{
			MaxValue = max(Arr[i], MaxValue);
			Index = i + 1;
		}
	}
	cout << MaxValue << '\n' << Index << '\n';
}