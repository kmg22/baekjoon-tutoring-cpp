#include <iostream>
using namespace std;

int main(void){
    int n, x;
    cin>>n>>x;
    int str[n];
    for(int i = 0; i<n; i++)
    {
        cin>>str[i];
    }
    
    for(int j = 0; j<n; j++)
    {
        if(str[j]<x) cout<<str[j]<<" ";
    }
    return 0;
}
