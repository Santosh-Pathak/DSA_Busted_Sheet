#include<iostream>
using namespace std;
int main()
{
    string text = "aaabaaaaab";
    string patt ="aab";
    int index;
    int m = text.size();
    int n=patt.size();
    for(int i=0;i<m-n;i++)
    {   index =i;
        string temp = text.substr(i,i+n);
        cout<<temp<<endl;
        if(temp == patt)
        cout<<"Pattern Found at index "<<index<<endl;
        
    }
    cout<<"end";

}