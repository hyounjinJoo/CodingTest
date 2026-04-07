#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	// N = 1, 1
	// N = 2, 2
	// N = 3, 2
	// N = 4, 4
	// N = 5, 4
	// N = 6, 4
	// N = 7, 4
	// N = 8, 8
	// N = 9, 8
	// N = 10, 8
	// N = 15, 8
	// N = 16, 16
	int N{}; cin >> N;
	int Multi{ 1 };
	while (true)
	{
		if (pow(2, Multi) > N)
		{
			cout << pow(2, Multi - 1);
			return 0;
		}
		++Multi;
	}
}