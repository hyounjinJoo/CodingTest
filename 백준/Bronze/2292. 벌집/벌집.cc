// 1 : 1번
// 2~7 : 2번
// 8~19 : 3번
// 20~37
// 38~61

// 1~2~8~20~38
// 1~7~19~37~61
// 1.... 6개 추가
// 6 * 2 추가?
// 6 * 3 추가?
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	// 1...2...8...20...38 ( 6^(n-1) 차이1...6...12...18...
	// 1...7...19...37...61 (6*n개 차이)
	
	// 1to 1 -> 1
	// 2 to 7 => 2
	// 8 to 19 => 3
	// 20 to 37 => 4
	// 38 to 61 => 5
	int Count = 1;
	long long input{}, Test{ 1 };
	cin >> input;
	while (true)
	{
		if (Count - 1 == 0) Test += 1;
		else Test += 6 * (Count - 1);
		
		if (input < Test)
		{
			cout << Count << '\n';
			break;
		}
		Count++;
	}
}