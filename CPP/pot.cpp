// Kattis Pot
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
	int N;
	cin >> N;
	int total = 0;
	int x, y, z;
	for (int i = 0; i < N; i++)
	{
		cin >> x;
		z = x / 10;
		y = x % 10;
		total += pow(z, y);
	}
	cout << total << endl;
	system("pause");
	return 0;
}