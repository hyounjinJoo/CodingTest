#include <iostream>
#include <vector>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	long long N{};
	cin >> N;
	vector<int> CountArr;
	CountArr.resize(10001);
	int Number{};
	for(int i = 0; i < N; ++i)
	{
		cin >> Number;
		CountArr[Number - 1]++;
	}

	for (int i = 0; i < 10001; ++i)
	{
		int Count = CountArr[i];
		while (Count--)
		{
			cout << i + 1 << '\n';
		}
	}
}