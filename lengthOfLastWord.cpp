#include <bits/stdc++.h>
using namespace std;
void lengthOfLastWord(string word)
{
    int size = 0;
    int l = word.size();
    for (int i = 0; i < l; i++)
    {
        if(word[i]==' ')
        size = 0;
        else
        size++;
    }
    cout<<size;
}
int main()
{
    string word = {" hello guys welcome to my vlog  "};
    lengthOfLastWord(word);
}