#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int L{}, M{}, R{};
	
	while (cin >> L >> M >> R)
	{
		cout << max(R - M, M - L) - 1 << '\n';
	}
}