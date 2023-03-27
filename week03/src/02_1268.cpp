#include <iostream>
#define MAX 1000
using namespace std;

int main()
{
    int n;
    cin >> n;
    int history[MAX + 1][5 + 1] = { 0, }; // history[student][grade]
    for(int i = 1; i <= n; i++) // input...
    {
        for(int j = 1; j <= 5; j++)
        {
            cin >> history[i][j];
        }
    }
    int count[MAX + 1][MAX + 1] = { 0, };
    for(int i = 1; i <= 5; i++)
    {
        for(int j = 1; j < n; j++)
        {
            for(int k = j + 1; k <= n; k++)
            {
                if(history[j][i] == history[k][i])
                {
                    count[j][k] = 1;
                    count[k][j] = 1;
                }
            }
        }
    }
    int score[MAX + 1] = { 0, };
    int chair = 1;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            score[i] += count[i][j];
        }
        if(score[i] > score[chair]) { chair = i; }
    }
    cout << chair << endl;
    return 0;
}