#include <iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int line{};
	cin >> line;
	for (int i = 1; i <= line; ++i)
	{
		for (int j = line; j > i; --j)
		{
			cout << ' ';
		}
		for (int j = 0; j < i; ++j)
		{
			cout << '*';
		}
		cout << '\n';
	}
}