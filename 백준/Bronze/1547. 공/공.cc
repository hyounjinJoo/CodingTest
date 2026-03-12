#include <iostream>
using namespace std;

void swap(int& Left, int& Right)
{
	int temp = Left;
	Left = Right;
	Right = temp;
}

int Cups[3]{1,};
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int Times = 0;
	cin >> Times;
	for (int i = 0; i < Times; ++i)
	{
		int Pos1, Pos2;
		cin >> Pos1 >> Pos2;
		swap(Cups[Pos1 - 1], Cups[Pos2 - 1]);
	}

	for (int i = 0; i < 3; ++i)
	{
		if (Cups[i] == 1) cout << i + 1 << '\n';
	}

	return 0;
}