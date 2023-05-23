#include <iostream>
#define MAX 1000
using namespace std;

int main(void)
{
    int head = 0, tail = 0, sum = 0;
    cin >> head >> tail;
    int arr[MAX] = {0, };
    int num = 1, cnt = 1;
    for(int i = 0; i < tail; i++)
    {
        arr[i] = num;
        if(cnt++ == num)
        {
            cnt = 1;
            num++;
        }
    }
    for (int i = head - 1 ; i < tail; i++)
    {
        sum += arr[i];
    }
    cout << sum << endl;
    return 0;
}