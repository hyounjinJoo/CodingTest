#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int Year = 0, Result = 0;
	cin >> Year;
	if (Year % 4 == 0 && (Year % 100 != 0 || Year % 400 == 0))
	{
		Result = 1;
	}

	cout << Result << '\n';
}