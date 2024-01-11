#include <iostream>
#include <algorithm>
#include <vector>
#include <string.h>

using namespace std;

int main()
{
    string word;
    cout << "Enter the String : ";
    cin >> word;
    vector<string> ans;
    int n = word.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            string sub = word.substr(i, j + 1);
            ans.push_back(sub);
        }
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
int flag=0;
    for (int i = 0; i < ans.size(); i++)
    {
        string sub = ans[i];
        for (int j = 0; j < ans[i].size(); j++)
        {   flag =0;
            for (int k = j + 1; k < ans[i].size(); k++)
            {
                if (sub[j] == sub[k])
                {
                    flag = 1;
                    break;
                }
            }
           
        }
         if (flag == 0)
            {
                cout << sub.size() << " ";
            }
    }
}