#include <iostream>
#include <queue>
#include <vector>

using namespace std;

class Solution
{
public:
    int kthSmallest(int arr[], int l, int r, int k)
    {
        // Create a Min Heap
        priority_queue<int, vector<int>, greater<int>> minHeap;

        // Insert elements into the Min Heap
        for (int i = l; i <= r; i++)
        {
            minHeap.push(arr[i]);
        }

        // Extract the kth smallest element
        for (int i = 0; i < k - 1; i++)
        {
            minHeap.pop();
        }

        return minHeap.top();
    }
};

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int k;
    cout << "Enter the value of k: ";
    cin >> k;

    Solution sol;
    int l = 0, r = n - 1;
    int kth = sol.kthSmallest(arr, l, r, k);

    cout << "The " << k << "th smallest element is: " << kth << "\n";

    return 0;
}
