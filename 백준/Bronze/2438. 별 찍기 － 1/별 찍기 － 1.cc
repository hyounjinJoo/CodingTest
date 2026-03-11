#include <iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int line;
	cin >> line;

	for (int i = 0; i < line; ++i)
	{
		for (int j = 0; j < i + 1; ++j)
			cout << '*';
		cout << '\n';
	}

	return 0;
}
