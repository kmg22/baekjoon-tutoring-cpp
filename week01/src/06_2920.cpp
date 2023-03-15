#include <iostream>
using namespace std;

int main()
{
    int note[8] = { 0, };
    for(int i = 0; i < 8; i++)
    {
        cin >> note[i];
    }
    int index = 0;
    bool ans[2] = {false, false};
    do
    {
        if(note[index] - note[index + 1] > 0) { ans[0] = true; }
        else if(note[index] - note[index + 1] < 0) { ans[1] = true; }
        else { break;}

        if(ans[0] == true && ans[1] == true)
        {
            break;
        }
        index++;
    } while(index < 7);
    if(ans[0] == true && ans[1] == false)
    {
        cout << "descending" << endl;
    }
    else if(ans[1] == true && ans[0] == false)
    {
        cout << "ascending" << endl;
    }
    else
    {
        cout << "mixed" << endl;
    }
    return 0;
}