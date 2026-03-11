
#include <iostream>

using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	// 영식 -> 0~30초마다 10원 청구
	// 민식 -> 0~60초마다 15원 청구
	int NumOfCall = 0;
	cin >> NumOfCall;
	int Y = 0, M = 0, Time = 0;

	for (int i = 0; i < NumOfCall; ++i)
	{
		cin >> Time;

		Y += ((Time / 30) + 1) * 10;
		M += ((Time / 60) + 1) * 15;
	}

	if (Y < M) cout << "Y " << Y << '\n';
	else if (M < Y) cout << "M " << M << '\n';
	else cout << "Y M " << Y << '\n';
}