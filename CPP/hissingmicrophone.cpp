// Kattis Hissing microphones
// Cliff Sparks

#include<iostream>
//#include<iomanip>
//#include<math.h>
#include<string>
//#include<vector>
//#include<algorithm>
using namespace std;

int main()
{
	string hiss;
	getline(cin, hiss);
	bool found = false;
	for (int i = 0; i < hiss.size() - 1; i++) {
		if (hiss[i] == 's' and hiss[i + 1] == 's') {
			found = true;
			break;
		}
	}
	if (found == true)
		cout << "hiss" << endl;
	else
		cout << "no hiss" << endl;
	system("pause");
	return 0;
}