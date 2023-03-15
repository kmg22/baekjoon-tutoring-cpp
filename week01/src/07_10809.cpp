#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string s;
    cin>>s;

    int ans[26];
    for(int i = 0; i<26; i++) {ans[i]=-1;}

    for(int i = 0; i<s.size(); i++)
    {
        int index = (int)s[i]-97;
        if(ans[index]==-1) {ans[index]=i;}

    }
    
    for(int i = 0; i<26; i++)
    {
        cout<<ans[i]<<" ";
    }

    return 0;
}