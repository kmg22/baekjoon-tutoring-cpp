#include <iostream>
using namespace std;

int main(void)
{
    int n = 100;
    int max= 0, second =0;
    for (int i = 1; i < n; i++)
    {
        int n1 = n, n2 = i, cnt = 2;
        while(1)
        {
            n2 = n1 - n2;
            if(n2 < 0) { break; }
            n1 -= n2;
            cnt ++;
        }
        if(cnt > max) { max = cnt; second = i; }
    }
    cout << max << endl;
    int n1 = n, n2 = second;
    for(int i = 0; i < max; i++)
    {
        cout << n1 - n2 << " ";
        n2 = n - second;
        n1 -= n2;
    }
    return 0;
}