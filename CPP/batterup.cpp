// Kattis Batter up!
// Cliff Sparks

#include<iostream>
#include<iomanip>
#include<math.h>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    float ave = 0;
    double total = 0;
    double n = 0;
    double ab;
    double arr[100];
    cin >> ab;
    for (int i = 0; i < ab; i++)
    {
        cin >> arr[i];
        if (arr[i] >= 0)
        {
            n++;
            total += arr[i];
        }
    }
    
    ave = total / n;
    cout << ave;
    system("pause");
    return 0;
}