/*
Given an array arr[] and an integer k where k is smaller than the size of the array, the task is to find the kth smallest element in the given array. It is given that all array elements are distinct.

Note:-  l and r denotes the starting and ending index of the array.

Example 1:

Input:
n = 6
arr[] = 7 10 4 3 20 15
k = 3
l=0 r=5

Output :
7

Explanation :
3rd smallest element in the given
array is 7.
Example 2:

Input:
n = 5
arr[] = 7 10 4 20 15
k = 4
l=0 r=4

Output :
15

Explanation :
4th smallest element in the given
array is 15.
Your Task:
You don't have to read input or print anything. Your task is to complete the function kthSmallest() which takes the array arr[], integers l and r denoting the starting and ending index of the array and an integer k as input and returns the kth smallest element.

Expected Time Complexity: O(n*log(n) )
Expected Auxiliary Space: O(log(n))
Constraints:
1 <= n <= 105
l = 0
r = N-1
1<= arr[i] <= 105
1 <= k <= n
*/
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int kthSmallest(vector<int> &arr, int k)
{
    sort(arr.begin(), arr.end());
    return arr[k - 1];
}

int kthLargest(vector<int> &arr, int k)
{
    sort(arr.begin(), arr.end(), greater<int>());
    return arr[k - 1];
}

int main()
{
    vector<int> arr = {7, 10, 4, 3, 20, 15};
    int k ;
    cout<<"enter the kth number of which you wanna find largest and smallest element in array ";
    cin>>k;

    cout << "Array: ";
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << "\n";

    cout << k << "th smallest element: " << kthSmallest(arr, k) << "\n";
    cout << k << "th largest element: " << kthLargest(arr, k) << "\n";

    return 0;
}
