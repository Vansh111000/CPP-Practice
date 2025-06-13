#include <iostream>
#include <cstring>
#include <string>

using namespace std;

// Challenge 2: Count vowels in a string
// Input: "hello world" → Output: 3

int isVowel(char ch)
{
    string vowels {"hello world"};
    return (vowels.find(ch)!= string::npos);
}
int main()
{
    string fullvowels {"AouAoueii"};
    int i {0};
    for(auto chara: fullvowels)
    {
        if (isVowel(chara))
        {
            i++;
            cout<<"This is the " << i << " vowel : "<<fullvowels[i]<<endl;

        }
    }
    cout << "There are total "<< i<<" vowels in the string."<<endl;
    cout<<"The size of the given string is "<<size(fullvowels)<<endl;
    return 0;
}
