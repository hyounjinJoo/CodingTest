
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int M, N;
	cin >> M >> N;

	vector<bool> IsPrime(N + 1, true);
	IsPrime[0] = IsPrime[1] = false;

	for (int i = 2; i * i <= N; ++i)
	{
		if (IsPrime[i])
		{
			for (int j = i * i; j <= N; j += i)
			{
				IsPrime[j] = false;
			}
		}
	}

	for (int i = M; i <= N; ++i)
	{
		if (IsPrime[i]) cout << i << '\n';
	}
}