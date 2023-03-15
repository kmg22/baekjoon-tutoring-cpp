#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int blank = i;
        int star = n - i;
        
        for (int j = 0; j < blank; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < star; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}