#include <iostream>
using namespace std;

int main(void)
{
    int arr[9][9] = { 0, };
    int* p = arr[0];
    int max = 0, max_row = 0, max_column = 0;
    for(int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 9; j++)
        {
            cin >> *p;
            if(*p > max)
            {
                max = *p++;
                max_row = i;
                max_column = j;
            }
        }
    }
    cout << max << endl;
    cout << max_row + 1 << " " << max_column + 1 << endl;
    return 0;
}