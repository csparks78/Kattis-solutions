#include <iostream>
#include <unordered_map>
#include <string>
#include <fstream>
#include <cassert>

using namespace std;

void find(string &word, unordered_map<string, string> &abc);
int print(string &word, unordered_map<string, string> &abc);

int main()
{
    string word;
    unordered_map<string, string> abc;
    find(word, abc);
    print(word, abc);
    return 0;
}
// void test()
// {
//     assert(print());
// }

void find(string &word, unordered_map<string, string> &abc)
{

    while (getline(cin, word) && word != "")
    {
        string english, unknown;
        int index = word.find(' ');
        english = word.substr(0, index);
        unknown = word.substr(index + 1, word.size() - 1);
        abc.insert({unknown, english});
    }
}
int print(string &word, unordered_map<string, string> &abc)
{
    int test;
    while (getline(cin, word))
    {
        //int test;
        if (abc.count(word) > 0)
        {
            cout << abc.find(word)->second << endl;
            test = 1;
        }
        else
        {
            cout << "eh" << endl;
            test = 0;
        }
    }
    return test;
}