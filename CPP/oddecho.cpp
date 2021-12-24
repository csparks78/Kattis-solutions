/*
Cliff Sparks
Kattis - oddecho
12-24-21
*/
#include<iostream>

using namespace std;

int main(){

    int numOfWords;
    int x;
    cin >> numOfWords;
    string words[numOfWords];

    for (int i = 0; i < numOfWords; i++){
        cin >> words[i];        
    }
    for (int i = 0; i < numOfWords; i+=2){
        cout << words[i] << endl;        
    }
    
    return 0;
}