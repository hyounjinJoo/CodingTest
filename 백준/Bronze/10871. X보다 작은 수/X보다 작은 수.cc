#include <iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int N, X, Input;
	cin >> N >> X;
	for (int i = 0; i < N; ++i)
	{
		cin >> Input;
		if (Input < X) cout << Input << ' ';
	}

	return 0;
}