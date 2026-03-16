#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	//long long A{}, B{}, V{}, Sum{}, Count{};
	//cin >> A >> B >> V;
	//while (true)
	//{
	//	++Count;
	//	Sum += A;
	//	if (Sum >= V) break;
	//	Sum -= B;
	//}
	long long A{}, B{}, V{}, Count{};
	cin >> A >> B >> V;
	Count = ceil((V - B) / static_cast<double>(A - B));

	cout << Count;
}