
#include <iostream>
using namespace std;

long long Calc(int n, int r, int c) {
    if (n == 0) return 0; // Base Case: 1x1 크기에 도달

    int half = 1 << (n - 1); // 현재 변의 길이의 절반
    int Offset = half * half;  // 한 사분면의 넓이에 대한 오프셋

    if (r < half && c < half)
        return Calc(n - 1, r, c); // 1사분면
    if (r < half && c >= half)
        return Offset + Calc(n - 1, r, c - half); // 2사분면
    if (r >= half && c < half)
        return 2 * Offset + Calc(n - 1, r - half, c); // 3사분면
    return 3 * Offset + Calc(n - 1, r - half, c - half); // 4사분면
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int N{};
	cin >> N;
	int r{}, c{};
	cin >> r >> c;

    long long Answer = Calc(N, r, c);
    cout << Answer;
}