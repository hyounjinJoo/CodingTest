#include <iostream>
#include <vector>
#include <limits>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int N{};
	cin >> N;

	vector<double> Scores;
	Scores.resize(N, 0);

	double M = numeric_limits<float>::min();
	for (int i = 0; i < N; ++i)
	{
		cin >> Scores[i];
		M = max(M, Scores[i]);
	}
	double NewTotalScore = 0;
	for (int i = 0; i < N; ++i)
	{
		// New Score = Origin / M * 100
		Scores[i] = Scores[i] / M * 100.f;
		NewTotalScore += Scores[i];
	}

	cout << NewTotalScore / static_cast<double>(N) << '\n';
}