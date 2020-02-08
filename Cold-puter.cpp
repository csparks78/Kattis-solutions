// Kattis cold-puter science
// Cliff Sparks

#include<iostream>

using namespace std;

void kattis();
int answer(int temp);

int main()
{	
	kattis();
	system("pause");
	return 0;
}

int answer(int temp)
{
	if (temp < 0)
		return 1;
	else return 0;
}

void kattis()
{
	int N, temp;
	cin >> N;
	unsigned int count = 0;
	for (int i = 0; i < N; i++)
	{
		cin >> temp;
		count += answer(temp);
	}
	cout << count << endl;
}
