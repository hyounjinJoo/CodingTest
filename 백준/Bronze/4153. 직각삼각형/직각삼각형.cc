#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	vector<long> Tri; Tri.resize(3);
	long Sum{};

	while (true)
	{
		cin >> Tri[0] >> Tri[1] >> Tri[2];
		if (Tri[0] == 0 && Tri[1] == 0 && Tri[2] == 0) break;
		Sum = 0;
		sort(Tri.begin(), Tri.end(), greater<long>());
		Tri[0] = pow(Tri[0], 2); Tri[0] *= -1;
		Tri[1] = pow(Tri[1], 2);
		Tri[2] = pow(Tri[2], 2);
		
		for(int i = 0; i < 3; ++i)
			Sum += Tri[i];

		if (!Sum) cout << "right\n";
		else cout << "wrong\n";
	}
}
