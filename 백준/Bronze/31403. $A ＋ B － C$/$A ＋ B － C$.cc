#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int A{}, B{}, C{};
	cin >> A >> B >> C;
	cout << A + B - C << '\n';
	
	int M = 0, Temp = B;
	while (Temp)
	{
		Temp /= 10;
		++M;
	}
	A *= pow(10, M);
	cout << A + B - C << '\n';
}