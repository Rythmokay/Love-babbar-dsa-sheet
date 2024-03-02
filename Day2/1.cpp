// Given an array A of size N of integers.Your task is to find the sum of minimum and maximum element in the array.
#include <iostream>
    using namespace std;
long long findsum(int A[], int N){
    long long max = A[0];
    long long min = A[0];

    for (int i = 0; i < N; i++)
    {
        if (max > A[i])
        {
            max = A[i];
        }
        if (min < A[i])
        {
            min = A[i];
        }
    }
    return max + min;
}
int main(){
    const int N = 5; // Change this to the size of your array
    int arr[N];
    cout << "Enter " << N << " elements of the array:\n";
    for (int i = 0; i < N; i++){
        cin >> arr[i];
        }
    long long result = findsum(arr, N);
    cout << "Sum of minimum and maximum elements: " << result << endl;
    return 0;
}
