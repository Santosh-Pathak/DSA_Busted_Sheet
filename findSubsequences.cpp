#include <bits/stdc++.h>

using namespace std;
vector<string> v;
void findSubsequences(string str, string newString, int index)
{
    if (index == str.length())
    {
        v.push_back(newString);
        cout << newString << " ";
        return;
    }
    char currentchar = str[index];
    findSubsequences(str, newString + currentchar, index + 1);
    findSubsequences(str, newString, index + 1);
}

int main()
{
    string str = "aaa";
    string newString = "";
    string dumy = "abc";
    findSubsequences(str, newString, 0);
    // cout<<endl<<"All SUBSEQUENCES ARE : ";
    auto it = find(v.begin(), v.end(), dumy);
    if (it != v.end())
        cout << endl
             << "String " << dumy << " is present ";
    else
        cout << endl
             << "String " << dumy << " is not present ";
}