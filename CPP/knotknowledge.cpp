/* 
Cliff Sparks
Kattis - Knotknowledge
12/24/21
*/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

void removeDuplicatesandElement(vector<int> &combined) { // removes duplicate and element in vector 
    if (combined.size() <= 1) return;
    sort(combined.begin(), combined.end());
    int cur_val = combined.front() - 1;
    auto pred = [&](const int& val) {
        if (val == cur_val) return true;
        cur_val = val;
        // Look ahead to the next element to see if it's a duplicate.
        return &val != &combined.back() && (&val)[1] == val;
    };
    combined.erase(std::remove_if(combined.begin(), combined.end(), pred), combined.end());
}

int main()
{
    int x;
    int totalKnots;
    vector<int> knotsSoFar;
    vector<int> knotsNeeded;
    vector<int> combined;
    int j, k;

    cin >> totalKnots;
    for (int i = 0; i < totalKnots; i++)
    {
        cin >> x;
        knotsNeeded.push_back(x);
    }
    for (int i = 0; i < totalKnots - 1; i++)
    {
        cin >> x;
        knotsSoFar.push_back(x);
    }
    combined.reserve(knotsSoFar.size() + knotsNeeded.size());
    combined.insert(combined.end(), knotsNeeded.begin(), knotsNeeded.end());
    combined.insert(combined.end(), knotsSoFar.begin(), knotsSoFar.end());    
    sort(combined.begin(), combined.end());
    removeDuplicatesandElement(combined);
    for (int i = 0; i < combined.size(); i++){
        cout << combined[i];
    }
    
    return 0;
}