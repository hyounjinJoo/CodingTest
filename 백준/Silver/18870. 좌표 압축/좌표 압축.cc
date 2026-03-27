#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int N{};
	cin >> N;
	vector<long long> Pos(N);
	for (int i = 0; i < N; ++i)
	{
		cin >> Pos[i];
	}

	vector<long long> ZipPos = Pos;
	sort(ZipPos.begin(), ZipPos.end());
	ZipPos.erase(unique(ZipPos.begin(), ZipPos.end()), ZipPos.end());
	for (int i = 0; i < N; ++i)
	{
		int IDX = lower_bound(ZipPos.begin(), ZipPos.end(), Pos[i]) - ZipPos.begin();
		cout << IDX << ' ';
	}
}