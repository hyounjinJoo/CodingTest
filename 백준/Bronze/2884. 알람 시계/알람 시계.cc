#include <iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int H{}, M{}, Time{};
	// 0 ~ 1440
	cin >> H; Time += H * 60;
	cin >> M; Time += M; Time -= 45;
	if (Time > 1440) Time -= 1440;
	if (Time < 0) Time += 1440;
	cout << Time / 60 << ' ' << Time % 60 << '\n';
}