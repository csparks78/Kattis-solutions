// Kattis - grassseed
// Cliff Sparks

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(7);
    float cost, l, w; 
    int lawns;
    float total, temp;
    int i;
    cin >> cost >> lawns;

    for (i = 0; i < lawns; i++)
    {
        cin >> l >> w;
        temp = l * w;
        total += temp; 
    }
    total *= cost;
    cout << total;

    return 0;
}