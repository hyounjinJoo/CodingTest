#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	long long N{}, T, P;
	cin >> N;
	long long Size[6];
	for (int i = 0; i < 6; ++i) cin >> Size[i];
	cin >> T >> P;
	long long A{};
	for (int i = 0; i < 6; ++i)
	{
		A += ceil(Size[i] / static_cast<double>(T));
	}
	cout << A << '\n';
	cout << N / P << ' ' << N % P;
}