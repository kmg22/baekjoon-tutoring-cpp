#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int in = 0;
    int out = 0;
    int current = 0;
    int max = 0;
    for(int i = 0; i < 4; i++)
    {
        cin >> out >> in;
        current -= out;
        current += in;
        if(current > max) { max = current; }
    }
    cout << max << endl;
    return 0;
}