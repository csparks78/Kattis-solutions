#include <iostream>
#include <string>

using namespace std;
string firstLetterWord(string str) 
{ 
    string result = ""; 
  
    // Traverse the string. 
    bool v = true; 
    for (int i=0; i<str.length(); i++) 
    { 
        // If it is space, set v as true. 
        if (str[i] == '-') 
            v = true; 
  
        // Else check if v is true or not. 
        // If true, copy character in output 
        // string and set v as false. 
        else if (str[i] != '-' && v == true) 
        { 
            result.push_back(str[i]); 
            v = false; 
        } 
    } 
  
    return result; 
} 
int main()
{
    // Driver cpde 
 
    string str; 
    getline(cin, str);
    cout << firstLetterWord(str); 
    return 0; 

}