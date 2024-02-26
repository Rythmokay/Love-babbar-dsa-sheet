#include <iostream>
using namespace std;
void Revarray(int arr[], int n, int start, int end)
{
    while (start < end)
    {
        // Swap elements at start and end indices
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move towards the middle
        start++;
        end--;
    }
}
int main()
{
    int n;
    cout<<"enter the size of the array";
    cin >> n;
    int arr[n];
    cout << "input of array " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Revarray(arr,n,0,n-1);
    cout << "array after reversing ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
}