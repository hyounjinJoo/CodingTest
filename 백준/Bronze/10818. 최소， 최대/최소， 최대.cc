#include <iostream>
#include <limits>

using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int Count = 0, Input = 0;
	cin >> Count;

	int Min, Max;
	Min = numeric_limits<int>::max();
	Max = numeric_limits<int>::min();	
	while (Count--)
	{
		cin >> Input;
		if (Max < Input) Max = Input;
		if (Min > Input) Min = Input;
	}

	cout << Min << ' ' << Max << '\n';

	return 0;
}