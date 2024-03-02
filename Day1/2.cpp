#include <iostream>
using namespace std;

pair<long long, long long> getMinMax(long long arr[], int n)
{
    long long max = arr[0];
    long long min = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    return make_pair(min, max);
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    long long arr[n]; // Use long long for consistency

    cout << "Enter " << n << " elements of the array:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    pair<long long, long long> result = getMinMax(arr, n);

    cout << "Minimum element: " << result.first << endl;
    cout << "Maximum element: " << result.second << endl;

    return 0;
}
