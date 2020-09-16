#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    vector<int> vec;
    int N, num;
    int p1 = 0;
    int p2 = 0;
    cin >> N;

    for (int i = 0; i < N; i++){
        cin >> num;
        vec.push_back(num);
    }

    cout << endl;
    sort(vec.begin(), vec.end());
    reverse(vec.begin(), vec.end());

    if (!vec.empty()) {
        for (int i = 0; i < vec.size(); i++)
        {
            if (i % 2 == 0)
                p1 += vec[i];
            else
                p2 += vec[i];
        }
    }
    
    cout << p1 << " " << p2 << endl;
    
    system("pause");
    return 0;
}