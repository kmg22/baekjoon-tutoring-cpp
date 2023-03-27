#include <iostream>
using namespace std;

int main(void)
{
    int mod[42] = {0, };
    int str[10];
    int time = 0;
    for(int i = 0; i<10; i++)
    {
        cin>>str[i];
        mod[str[i]%42]++;
    }
    for(int j = 0; j<42; j++)
    {
        if(mod[j]!=0) {time++;}
    }
    cout<<time;
    return 0;
}