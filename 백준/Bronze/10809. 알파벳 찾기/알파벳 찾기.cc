#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string Str;
	getline(cin, Str);

	int AlphabetPosition['z' - 'a' + 1];
	memset(AlphabetPosition, -1, sizeof(int) * ('z' - 'a' + 1));
	for (int IDX = 0; IDX < Str.length(); ++IDX)
	{
		if (Str[IDX] <= 'z' && Str[IDX] >= 'a' && AlphabetPosition[Str[IDX] - 'a'] == -1)
		{
			AlphabetPosition[Str[IDX] - 'a'] = IDX;
		}
	}

	for (int IDX = 0; IDX < 'z' - 'a' + 1; ++IDX)
	{
		cout << AlphabetPosition[IDX] << ' ';
	}

	cout << '\n';

	return 0;
}