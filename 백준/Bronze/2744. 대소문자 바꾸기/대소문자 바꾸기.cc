#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string Input;
	cin >> Input;

	for (int IDX = 0; IDX < Input.length(); ++IDX)
	{
		if (Input[IDX] >= 'a') Input[IDX] -= ('a' - 'A');
		else Input[IDX] += ('a' - 'A');
	}

	cout << Input << '\n';
}