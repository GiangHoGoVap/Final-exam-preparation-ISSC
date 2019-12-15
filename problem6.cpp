#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char a, word[50];
    int i, freq = 0, flag = 0;
 
    cout <<"Enter character: ";
    cin >> a;
    cout <<"Now enter the word: ";
    cin >> word;
    for (i = 0; i < strlen(word); i++)
    {
        if (word[i] == a)
        {
            flag = 1;
            freq++;
        }
    }
    if (flag)
    {
        cout << "The character " << a << " occured in string " << freq << endl;
    }
    else
    {
        cout << "None" ;
    }
 
    return 0;
}
