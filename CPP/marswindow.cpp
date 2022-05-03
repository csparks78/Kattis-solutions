# include<iostream>
#include<vector>
using namespace std;
int isIncluded(vector<int> years){
    int year = 2018;
    for (int i = 0; i < 10000; i++){
        if (i = 12){
            year +=1;
            
        }
        if ( i = 26){
            years.push_back(i);
        }  
        
        else i++;
    }
    return 1;
}

int main(){

    vector<int>years;
    isIncluded(years);
    for (int i = 0; i < years.size(); i++)
    {
        cout << "Years: "<< years[i] << endl; 
    }
    return 0;
}