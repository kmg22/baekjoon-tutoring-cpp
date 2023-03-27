#include <iostream>
using namespace std;

int main()
{
    string plain;
    getline(cin, plain);
    int index = 0;
    while(index < plain.size())
    {
        if(((int)plain.at(index) >= 65 && (int)plain.at(index) <= 77) || ((int)plain.at(index) >= 97 && (int)plain.at(index) <= 109))
        {
            char tmp = char((int)plain.at(index) + 13);
            string rot(1, tmp);
            plain.replace(index, 1, rot);
        }
        else if(((int)plain.at(index) >= 78 && (int)plain.at(index) <= 90) || ((int)plain.at(index) >= 110 && (int)plain.at(index) <= 122))
        {
            char tmp = char((int)plain.at(index) - 13);
            string rot(1, tmp);
            plain.replace(index, 1, rot);
        }
        index++;
    }
    cout << plain << endl;
    return 0;
}