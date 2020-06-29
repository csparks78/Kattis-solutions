// Cliff Sparks
// Kattis nodup

#include <bits/stdc++.h>
using namespace std;

string words(string s)
{
   istringstream check(s);
   string token;

   unordered_map<string, int> set;

   while (getline(check, token, ' '))
   {
      if (set.find(token) != set.end())
         set[token] += 1; // word exists
      else
         // insert new word to set
         set.insert(make_pair(token, 1));
   }

   istringstream check2(s);
   while (getline(check2, token, ' '))
   {
      int count = set[token];
      if (count > 1)
      {
         return token;
      }
   }

   return "no dup";
}

// driver program
int main()
{
   string s;
   getline(cin, s);
   string word = words(s);
   if (word != "no dup")
      cout << "no" << endl;
   else
      cout << "yes";
   return 0;
}