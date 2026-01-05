#include <iostream>
#include <string>
#include <stack>

using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    stack<char> ST;
    string STR;
    getline(cin, STR);

    int CurrentOpenPipes = 0;
    int CuttedPipesCount = 0;
    char BeforeCH = NULL;
    for (const char& CH : STR)
    {
        if (CH == '(')
        {
            ST.push('('); ++CurrentOpenPipes;
        }
        else
        {
            if (BeforeCH == ')')
            {
                CuttedPipesCount++;
                --CurrentOpenPipes;
            }
            else
            {
                CuttedPipesCount += (CurrentOpenPipes--) - 1;
            }

            ST.pop();
        }

        BeforeCH = CH;
    }

    cout << CuttedPipesCount << '\n';
}
