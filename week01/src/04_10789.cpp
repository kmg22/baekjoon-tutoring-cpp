#include <iostream>
using namespace std;

int main(){
    int date;
    cin >> date;
    int car[5];
    int count = 0;
    for (int i = 0; i < 5; i++)
    {
        cin >> car[i];
        if(car[i] == date) { count++; }
    }
    cout << count;
    return 0;
}
