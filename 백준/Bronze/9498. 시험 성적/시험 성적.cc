#include <iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int Score = 0;
	cin >> Score;

	char Grade = NULL;
	if (Score >= 90) Grade = 'A';
	else if (Score >= 80) Grade = 'B';
	else if (Score >= 70) Grade = 'C';
	else if (Score >= 60) Grade = 'D';
	else Grade = 'F';

	cout << Grade << '\n';

	return 0;
}