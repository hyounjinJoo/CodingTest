#include <iostream>
#include <map>

using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	// 서로 다른 값의 최대는 0~10개...
	// 나머지의 범위는 0~41
	map<int, int> RemainMap;

	int Count = 10, Remain = 0;
	while (Count--)
	{
		cin >> Remain;
		Remain %= 42;
		RemainMap[Remain]++;
	}

	cout << RemainMap.size() << '\n';

	return 0;
}