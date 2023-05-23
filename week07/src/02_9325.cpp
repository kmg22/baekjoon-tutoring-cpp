#include <iostream>
using namespace std;

int main(void)
{
    int n = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int car_cost = 0, opt = 0, opt_num = 0, opt_cost = 0, opt_sum = 0;
        cin >> car_cost >> opt;
        for(int j = 0; j < opt; j++)
        {
            cin >> opt_num >> opt_cost;
            opt_sum += opt_num * opt_cost;
        }
        cout << car_cost + opt_sum << endl;
    }
    return 0;
}