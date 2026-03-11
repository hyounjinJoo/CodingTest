#include <iostream>
#include <string>

using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int numA, numB;
    cin >> numA >> numB;
    string result{ '<' };
    if (numA > numB) result = '>';
    else if (numA == numB) result = "==";
    cout << result;

    return 0;
}