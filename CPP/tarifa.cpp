// Kattis Tarifa
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
	int x, y, N;
	int z = 0;
	cin >> x >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> y;
		z += x - y;
	}
	cout << z + x << endl;
	system("pause");
	return 0;
}