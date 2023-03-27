#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    int height[9] = { 0, };
    int total_sum = 0;
    for(int i = 0; i < 9; i++)
    {
        cin >> height[i];
        total_sum += height[i];
    }
    int fake_sum = total_sum - 100;
    int fake1 = 0;
    int fake2 = 0;
    for(int i = 0; i < 8; i++)
    {
        for(int j = i + 1; j < 9; j++)
        {
            if(height[i] + height[j] == fake_sum)
            {
                fake1 = height[i];
                fake2 = height[j];
                break;
            }
        }
    }
    sort(height, height + 9);
    for(int i = 0; i < 9 ; i++)
    {
        if(height[i] != fake1 && height[i] != fake2)
        {
            cout << height[i] << endl;
        }
    }
    return 0;
}