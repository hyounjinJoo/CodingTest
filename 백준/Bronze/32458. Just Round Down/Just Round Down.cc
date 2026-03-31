#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	float Value{};
	cin >> Value;
	cout << static_cast<int>(floor(Value));
}