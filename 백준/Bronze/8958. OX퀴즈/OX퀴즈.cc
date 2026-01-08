#include <iostream>
#include <string>

using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int Count = 0;
	string Str;
	
	cin >> Count;
	while (Count--)
	{
		cin >> Str;

		int Continue = 0, Sum = 0;
		for (int IDX = 0; IDX < Str.length(); ++IDX)
		{
			if (IDX != 0 && Str[IDX - 1] == 'O')
			{
				++Continue;
			}
			else
			{
				Continue = 1;
			}

			if (Str[IDX] == 'O') Sum += Continue;
		}

		cout << Sum << '\n';
	}

	return 0;
}