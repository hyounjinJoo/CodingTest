#include <iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string S{};
	int i{};

	cin >> S >> i;
	cout << S[i-1] << '\n';
}