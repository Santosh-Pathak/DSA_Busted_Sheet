#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void keypadSolve(vector<string> &mapping, int index, vector<string> &ans, string output, string digits)
{
    // base Case
    if (index >= digits.size())
    {
        ans.push_back(output);
        return;
    }
    // recursion
    int digit = digits[index] - '0';
    string value = mapping[digit];
    for (int i = 0; i < value.size(); i++)
    { // include  character
        char ch = value[i];
        output.push_back(ch);
        //recursion
        keypadSolve(mapping, index + 1, ans, output, digits);
        // backtracking
        output.pop_back();
    }
}
int main()
{
    string digits = "23";
    vector<string> ans;
    int index = 0;
    string output = "";
    vector<string> mapping(10);
    mapping[2] = "abc";
    mapping[3] = "def";
    mapping[4] = "ghi";
    mapping[5] = "jkl";
    mapping[6] = "mno";
    mapping[7] = "pqrs";
    mapping[8] = "tuv";
    mapping[9] = "wxyz";
    keypadSolve(mapping, index, ans, output, digits);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}