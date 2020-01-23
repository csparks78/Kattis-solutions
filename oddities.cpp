// Kattis Oddities
// Cliff Sparks

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int x;
	cin >> x;
	int y[20];
	for (int i = 0; i < x; i++)
	{
		cin >> y[i];
	}
	for (int i = 0; i < x; i++)
	{
		
		if (y[i] % 2 == 0)
			cout << y[i] << " is even" << endl;
		else cout << y[i] << " is odd" << endl;
		
	}
	system("pause");
	return 0;
}