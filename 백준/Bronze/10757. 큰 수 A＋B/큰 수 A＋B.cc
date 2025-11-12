#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    vector<int> Num1(10001);
    vector<int> Num2(10001);
    string Str1;
    string Str2;
    cin >> Str1 >> Str2;

    int MaxPosition = 0;
    {
        int StrLength1, StrLength2;
        StrLength1 = Str1.length();
        StrLength2 = Str2.length();

        int RealLength1 = 0;
        int RealLength2 = 0;
        for (int IDX = Str1.length() - 1; IDX >= 0; --IDX)
        {
            int TempVal = Str1[IDX] - '0';
            if (TempVal != 0) RealLength1 = Str1.length() - IDX;
            Num1[Str1.length() - 1 - IDX] = TempVal;
        }

        for (int IDX = Str2.length() - 1; IDX >= 0; --IDX)
        {
            int TempVal = Str2[IDX] - '0';
            if (TempVal != 0) RealLength2 = Str2.length() - IDX;
            Num2[Str2.length() - 1 - IDX] = TempVal;
        }

        // 999 + 999 = 1998, 1자리가 최대로 증가
        // 99 + 999 = 1098, 999 + 99 = 1098.
        MaxPosition = RealLength1 > RealLength2 ? RealLength1 + 1 : RealLength2 + 1;
    }

    bool IsNeedCheckFront = false;
    for (int IDX = 0; IDX < MaxPosition; ++IDX)
    {
        int TempValue = Num1[IDX] + Num2[IDX];
        if (IsNeedCheckFront)
        {
            ++TempValue;
        }

        if (TempValue > 9)
        {
            IsNeedCheckFront = true;
            TempValue -= 10;
        }
        else
        {
            IsNeedCheckFront = false;
        }

        Num1[IDX] = TempValue;
    }
    
    for (int IDX = MaxPosition; IDX >= 0; --IDX)
    {
        if (Num1[IDX] != 0)
        {
            MaxPosition = IDX;
            break;
        }
    }

    for (int IDX = MaxPosition; IDX >= 0; --IDX)
    {
        // MaxPosition에 대한 예외처리
        if (IDX == MaxPosition && Num1[IDX] == 0) continue;
        
        cout << Num1[IDX];
    }
    cout << endl;

    return 0;
}