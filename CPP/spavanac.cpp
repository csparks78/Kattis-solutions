// Cliff Sparks
// Kattis Spavavac

#include <iostream>

using namespace std;

int main()
{
    int hour, min, x, y;
    cin >> hour >> min;
    if (hour > 23 || min > 59)
    {
        cout << "Invalid time" << endl;
        return 0;
    }
    x = hour * 60 + min;
    int i;
    for (i = 45; i > 0; i--)
    {
        x--;
        if (x < 0)
            x = 1439;
    }
    y = x;
    cout << y / 60 << " " << y % 60 << endl;
    return 0;
}