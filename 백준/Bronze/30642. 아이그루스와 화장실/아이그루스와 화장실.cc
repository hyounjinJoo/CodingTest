#include <iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int N{}; cin >> N;
	string Name{}; cin >> Name;
	int K{}; cin >> K;
	// odd -> big
	if (Name[0] == 'a')
	{
		if (K % 2 == 0)
		{
			if (K + 1 <= N) K = K + 1;
			else if (K - 1 >= 1) K = K - 1;
		}
	}
	else
	{
		if (K % 2 == 1)
		{
			if (K + 1 <= N) K = K + 1;
			else if (K - 1 >= 1) K = K - 1;
		}
	}

	cout << K;
}