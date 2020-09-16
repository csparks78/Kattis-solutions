//Cliff Sparks
//2-27-19


#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main()
{

    int z;
    int jack, jill;
    cin >> jack >> jill;
    while (jack > 0 || jill > 0)
    {
        unordered_set<int> jacks;
        for (int i = 0; i < jack; i++)
        {
            cin >> z;
            jacks.insert(z);
        }        
        int counter = 0;
        for (int i = 0; i < jill; i++)
        {
            cin >> z;
            if (jacks.count(z))
                counter++;
        }
        cout << counter << endl;
        cin >> jack >> jill;
    }
    //cout << jack << endl;
    return 0;
}