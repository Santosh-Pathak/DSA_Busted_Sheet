#include <iostream>
using namespace std;
int findSquare(int n)
{   int ans;
    int target = n;
    int s = 0;
    int e = n;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (mid * mid == target)
            return mid;
        if (mid * mid > target)
            e = mid - 1;
        else{
            ans=mid;
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    long long int n;
    cout << "Enter a Number to Find Square  Root : ";
    cin >> n;
    int ans= findSquare(n);
    int precision ;
    cout<<"Enter the digit upto  precision count :  ";
     cin>>precision;
    double finalAns;
     double step =.1;
    for(int i=0;i<precision;i++)
    {
        for( finalAns = ans; finalAns*finalAns <n;finalAns +=step)
        {
        }
        step /=10;
    }
    cout<<finalAns;
}