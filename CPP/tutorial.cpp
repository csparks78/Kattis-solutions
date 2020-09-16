#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cassert>

using namespace std;

bool check(int oper, int num, int exp);
void test();

int main()
{
    //test();
    int oper, num, algcomp;
    cin >> oper >> num >> algcomp;
    int facto = 1;
    switch (algcomp)
    {
    case 1:
        for (int i = num; i > 0; --i)
        {
            if (facto > oper)
            {
                cout << "TLE" << endl;
                return 0;
            }
            facto *= i;
        }
        break;
    case 2:
        if (check(oper, 2, num))
            return 0;
        break;
    case 3:
        if (check(oper, num, 4))
            return 0;
        break;
    case 4:
        if (check(oper, num, 3))
            return 0;
        break;
    case 5:
        if (check(oper, num, 2))
            return 0;
        break;
    case 6:
        if ((num * log2(num)) > oper)
        {
            cout << "TLE" << endl;
            return 0;
        }
    case 7:
        if (num > oper)
        {
            cout << "TLE" << endl;
            return 0;
        }
        break;
    }
    cout << "AC" << endl;
}
void test()
{
    int oper1 = 100, num1 = 50000, algcomp1 = 3;
    int oper2 = 1000, num2 = 500, algcomp2 = 6;
    int oper3 = 1, num3 = 2, algcomp3 = 3;
    assert(check(oper1, num1, algcomp1)==0);
    assert(check(oper2, num2, algcomp2)==1);
    assert(check(oper3, num3, algcomp3)==1);
    cout << "All test cases passed!" << endl;
}

bool check(int oper, int num, int exp)
{
    int prod = num;
    for (int i = 1; i < exp; ++i)
    {
        prod *= num;
        if (prod > oper)
        {
            cout << "TLE" << endl;
            return true;
        }
    }
    return false;
}