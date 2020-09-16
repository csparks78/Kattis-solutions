#include<iostream>
#include<string>
//#include<>

using namespace std;


int diff = 0;

int main()
{
    int ans[6] = { 1, 1, 2, 2, 2, 8 };
    int hand[6];
    for (int i = 0; i <= 5; i++) {
        cin >> hand[i];
        //cout << hand[i] << " ";       
        diff = ans[i] - hand[i];    //need loop to compare 2 arrays to equal each other
        cout << diff << " ";
    }
    
    
    
    system("pause");
    return 0;
}