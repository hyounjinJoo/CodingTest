#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int Value{};
	cin >> Value;
	
	if (Value >= 620) cout << "Red";
	else if (Value >= 590) cout << "Orange";
	else if (Value >= 570) cout << "Yellow";
	else if (Value >= 495) cout << "Green";
	else if (Value >= 450) cout << "Blue";
	else if (Value >= 425) cout << "Indigo";
	else if (Value >= 380) cout << "Violet";
}