// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

// Find all subsequences
void printSubsequence(string input, string output, vector<string> &ans)
{
    // Base Case
    // if the input is empty print the output string
    if (input.empty())
    {
        ans.push_back(output);
        return;
    }

    // output is passed with including the Ist character of Input string
    printSubsequence(input.substr(1), output + input[0], ans);

    // output is passed without including the Ist characte of Input string
    printSubsequence(input.substr(1), output, ans);
}

// Driver code
int main()
{

    string output1 = "";
    string input1 = "abcd";
    vector<string> ans1;
    printSubsequence(input1, output1, ans1);
    string output2 = "";
    string input2 = "cdef";
    vector<string> ans2;
    printSubsequence(input2, output2, ans2);
    for (int i = 0; i < ans1.size(); i++)
    {
        cout << ans1[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < ans2.size(); i++)
    {
        cout << ans2[i] << " ";
    }
    cout << endl;
    string longest = "";
    for (int i = 0; i < ans1.size(); i++)
    {

        for (int j = 0; j < ans2.size(); j++)
        {
            if (ans1[i] == ans2[j])
            {
                if (longest.size() < ans1[i].size())
                {
                    longest = ans1[i];
                }
            }
        }
    }
    cout << "answer is : " << longest;
    return 0;
}
