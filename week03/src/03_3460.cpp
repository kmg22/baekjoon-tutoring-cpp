#include <iostream>
using namespace std;

int main(){
    int T;
    cin >> T;
    for(int i = 0; i < T; i++)
    {
        int n;
        cin >> n;
        int idx = 0;
        bool first = true;
        while(1)
        {
            if(n % 2 == 1)
            {
                if(first)
                {
                    cout << idx;
                    first = false;
                }
                else
                {
                    cout << " " << idx;
                }
            }
            n /= 2;
            idx++;
            if(n == 1)
            {
                cout << (first ? "" : " ") << idx << endl;
                break;
            }
            if (n == 0)
            {
                cout << endl;
                break;
            }
        }
    }
    return 0;
}