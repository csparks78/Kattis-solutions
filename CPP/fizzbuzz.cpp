#include <iostream>
#include <string>


using namespace std;


int main()
{
    int num1 = 3;
    int num2 = 5;
    int num3 = 15;
    cin >> num1 >> num2 >> num3;
    
    
    for (int i =1; i <= num3; i++)
    {
        if (i% num2 == 0 && i% num1 == 0) {
            cout << "fizzbuzz" << endl;
        }
        else if (i% num1 == 0){
            cout << "fizz" << endl;
        }
        else if (i% num2 == 0) {
            cout << "buzz" << endl;
        }
        else {
            cout << i << endl;
        }
    }
    system("pause");
    return 0;
}