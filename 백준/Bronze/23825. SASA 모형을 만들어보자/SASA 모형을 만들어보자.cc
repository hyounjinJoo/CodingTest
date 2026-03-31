#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int S{}, A{};
	cin >> S >> A;
	S = min(S, A);
	cout << static_cast<int>(S / 2);
}