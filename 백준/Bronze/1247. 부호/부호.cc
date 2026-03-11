#include <iostream>
#include <climits>
using namespace std;

int main()
{
	long long NumOfData = 0;
	for (int i = 0; i < 3; ++i)
	{
		cin >> NumOfData;
		long long Sum = 0;
		long long Data = 0;
		int OverFlow = 0;
		for (int j = 0; j < NumOfData; ++j)
		{
			cin >> Data;
			// Max는 100이라 가정, Sum은 80이고 Data가 40이면 오버플로우 발생.
            // 100(MAX) - 40(DATA) => 60, Sum은 80.
			if (Sum > 0 && Data > 0 && Sum > LLONG_MAX - Data)
				OverFlow++;
			else if (Sum < 0 && Data < 0 && Sum < LLONG_MIN - Data)
				OverFlow--;
            
			Sum += Data;
		}
		if (OverFlow > 0) cout << '+';
		else if (OverFlow < 0) cout << '-';
		else
		{
			if (Sum > 0) cout << '+';
			else if (Sum < 0) cout << '-';
			else cout << '0';
		}
		cout << '\n';
	}
}