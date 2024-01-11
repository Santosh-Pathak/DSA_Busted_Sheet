#include <bits/stdc++.h>
using namespace std;
int binarySearch(vector<int >arr,int k,int s,int e)
{   
    int mid = s+(e-s)/2;
   while(s<e)
   {
       int ele =arr[mid];

       if(ele == k)
       {
           return mid;
       }
       if(k<ele)
       {
           e = mid-1;
       }
       else
       {
           s= mid+1;
       }
       mid = s+(e-s)/2;
   }
   return -1;
}
int findPivot(vector<int> arr)
{
    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (mid + 1 < arr.size() && arr[mid] > arr[mid + 1])
            return mid;
        if (mid - 11 >= 0 && arr[mid - 1] > arr[mid])
            return mid - 1;

        if (arr[s] >= arr[mid])
            e = mid - 1;
        else
            s = mid;

        mid = s + (e - s) / 2;
    }
    return s;
}
int main()
{
    vector<int> nums;
    nums = {3, 4, 5, 8, 1, 2, 3};
    int pivot = findPivot(nums);
    int target =5;
    cout << "Pivot Element is " << nums[pivot] << endl;
    if (target >= nums[0] && target <= nums[pivot])
    {
        int ans = binarySearch(nums, target, 0, pivot);
        cout << ans;
    }
    else if (target >= nums[pivot + 1] && target <= nums[nums.size() - 1])

    {
        int ans = binarySearch(nums, target, pivot, nums.size() - 1);
        cout << ans;
    }
}