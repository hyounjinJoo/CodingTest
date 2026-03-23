#include <iostream>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	// 1 1 2 2 2 8
	int Check[6] = { 1,1,2,2,2,8 };
	int Input{};
	for (int i = 0; i < 6; ++i)
	{
		cin >> Input;
		Check[i] = Check[i] - Input;
	}
	for (int i = 0; i < 6; ++i)
	{
		cout << Check[i] << ' ';
	}
}