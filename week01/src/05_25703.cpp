#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    cout << "int a;" << endl;
    for (int i = 0; i < n; i++)
    {
        if(i == 0)
        {
            cout << "int *ptr = &a;" << endl;
        }
        else if(i == 1)
        {
            cout << "int **ptr2 = &ptr;" << endl;
        }
        else
        {
            cout << "int ";
            for (int j = 0; j < i + 1; j++) { cout << "*"; }
            cout << "ptr" << i + 1 << " = &ptr" << i << ";" << endl;
        }
    }
    return 0;
}