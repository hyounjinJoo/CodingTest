
#include <iostream>
#include <map>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int Count{};
	cin >> Count;
	map<int, bool> As;
	int Num{};
	while (Count--)
	{
		cin >> Num;
		As[Num] = true;
	}

	cin >> Count;
	while (Count--)
	{
		cin >> Num;
		cout << (As[Num] ? '1' : '0') << '\n';
	}
}