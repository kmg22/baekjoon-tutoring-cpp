#include <iostream>
using namespace std;

// Dynamic Programming
long long fbarr[100] = { 0, 1, };

long long fb(int n){
    if (n == 0 || n == 1)
    {
        return fbarr[n];
    }
    else if (fbarr[n] == 0)
    {
        fbarr[n] = fb(n - 1)+ fb(n - 2);
    }
    return fbarr[n];
}

int main(){
    int n;
    cin >> n;
    cout << fb(n);
    return 0;
}
