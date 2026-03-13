#include <iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int Count, Sum = 0;
	string N;
	cin >> Count >> N;
	for (int i = 0; i < Count; ++i)
	{
		Sum += N[i] - '0';
	}

	cout << Sum << '\n';
}