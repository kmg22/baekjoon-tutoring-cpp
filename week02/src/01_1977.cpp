#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num1 = 0;
    int num2 = 0;
    cin >> num1 >> num2;
    int min = (int)ceil(sqrt(num1));
    int max = (int)floor(sqrt(num2));
    int sum = 0;
    if(min >= max)
    {
        cout << -1 << endl;
        return 0;
    }
    while(min <= max)
    {
        sum += pow(min, 2);
        min++;
    }
    cout << sum << endl;
    cout << pow((int)ceil(sqrt(num1)), 2) << endl;
    return 0;
}