// Kattis One Chicken Per Person!
// Cliff Sparks

#include<iostream>
//#include<iomanip>
#include<cmath>
//#include<string>
//#include<vector>
//#include<algorithm>
using namespace std;

int main()
{
	int chicken1;
	int chicken2;
	int total;
	cin >> chicken1 >> chicken2;
	total = chicken2 - chicken1;
	if (total > 1)
	{
		cout << "Dr. Chaz will have " << abs(total) << " pieces of chicken left over!" << endl;
	}
	else if (total == 1)
	{
		cout << "Dr. Chaz will have " << abs(total) << " piece of chicken left over!" << endl;
	}
	else if (total == -1)
	{
		cout << "Dr. Chaz needs " << abs(total) << " more piece of chicken!" << endl;
	}
	else
	{
		cout << "Dr. Chaz needs " << abs(total) << " more pieces of chicken!" << endl;
	}
	system("pause");
	return 0;
}