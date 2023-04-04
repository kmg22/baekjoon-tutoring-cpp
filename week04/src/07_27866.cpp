#include <iostream>
using namespace std;

int main(void)
{
    string str;
    int n = 0;
    cin >> str >> n;
    cout << str.at(n - 1) << endl;
    return 0;
}