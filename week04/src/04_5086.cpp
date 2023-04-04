#include <iostream>
using namespace std;

int main(void)
{
    while(1)
    {
        int n1 = 0, n2 = 0;
        cin >> n1 >> n2;
        if(n1 == 0 && n2 == 0) { break; }
        if((n1 > n2) && (n1 % n2 == 0))
        {
            cout << "multiple" << endl;
            continue;
        }
        if((n1 < n2) && (n2 % n1 == 0))
        {
            cout << "factor" << endl;
            continue;
        }
        cout << "neither" << endl;
    }
    return 0;
}