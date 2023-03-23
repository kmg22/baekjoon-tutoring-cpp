#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string in_word;
    cin>>in_word;
    int freq[26] = {0, };
    for(int i = 0; i<in_word.length(); i++)
    {
        if(in_word[i]>='A' && in_word[i]<='Z') // Capital letter
        {freq[(int)in_word[i]-65]++;}
        else
        {freq[(int)in_word[i]-97]++;}
    }
    int max = freq[0];
    int index = 0;
    for(int j = 0; j<26; j++)
    {
        if(max<freq[j]) {max=freq[j]; index = j;}
    }
    int time = 0;
    for(int k = 0; k<26; k++)
    {if(freq[k]==freq[index]) time++;}
    if(time==1)
    {cout<<(char)(index+65)<<endl;}
    else cout<<"?"<<endl;
    return 0;
}