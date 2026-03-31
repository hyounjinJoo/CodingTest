#include <iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int N{};
	cin >> N;
	cin.ignore();
	for (int i = 0; i < N; ++i)
	{
		char Input[31];
		cin.getline(Input, 31);
		if (Input[0] >= 'a') Input[0] -= ('a' - 'A');
		cout << Input << '\n';
	}
}