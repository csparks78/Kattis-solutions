//kattis a new alphabet
//started 2/20/19
//Cliff Sparks
//CSCI 112 

#include <iostream>
#include <string>
#include <cstring>
#include <unordered_map>
#include <algorithm>
#include <cassert>

using namespace std;

//function prototypes
string convert(string input);
string lower(string lwr);
//void test1();
//void test2();
//void test3();

string convert(string input) //function to convert phrase
{
    string deCoded;

    static const unordered_map<char, string> code{
        {'a', "@"},
        {'b', "8"},
        {'c', "("},
        {'d', "|)"},
        {'e', "3"},
        {'f', "#"},
        {'g', "6"},
        {'h', "[-]"},
        {'i', "|"},
        {'j', "_|"},
        {'k', "|<"},
        {'l', "1"},
        {'m', "[]\\/[]"},
        {'n', "[]\\[]"},        //inordered map for code
        {'o', "0"},
        {'p', "|D"},
        {'q', "(,)"},
        {'r', "|Z"},
        {'s', "$"},
        {'t', "']['"},
        {'u', "|_|"},
        {'v', "\\/"},
        {'w', "\\/\\/"},
        {'x', "}{"},
        {'y', "`/"},
        {'z', "2"}};

    for (int i = 0; i < input.size(); i++) //converts char phrase to string
    {
        const char c = input[i];

        if ((code.count(c) == 1))
        {
            deCoded += code.at(c);
        }
        else
        {
            deCoded += c;
        }
    }
    return deCoded;
}

string lower(string lwr) //allows char phrase to accept upper and lower
{
    transform(lwr.begin(), lwr.end(), lwr.begin(), ::tolower);
    return lwr;
}

int main()
{
    string myInput, outPut;
       
    
        //run test cases
        //test1();
        //test2();
        //test3();
        

        // run kattis tests
        getline(cin, myInput);
        myInput = lower(myInput);
        outPut = convert(myInput);
        cout << outPut << "\n";
    

    return 0;
}
/*
void test1()
{
    assert(convert("coding is fun!") == "(0|)|[]\\[]6 |$ #|_|[]\\[]!");
    cout << "testCase1: Passed!" << endl;
}
void test2()
{
    string dog = "hello world";
    string key = "[-]3110 \\/\\/0|Z1|)";
    assert(convert(dog) == key);
    cout << "testCase2: Passed!" << endl;
}
void test3()
{
    assert(lower("DONT USE CAPS LOCK!!") == "dont use caps lock!!");
    cout << "testCase3: Passed!" << endl;
}
*/