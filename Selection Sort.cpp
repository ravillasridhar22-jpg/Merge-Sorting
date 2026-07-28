// C++ program for the implementation of Selection Sort
#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int>& v) {
    int n = v.size();

    // Move the boundary of the unsorted subarray
    for (int i = 0; i < n - 1; i++) {

        // Assume the current element is the minimum
        int minIndex = i;

        // Find the minimum element in the remaining array
        for (int j = i + 1; j < n; j++) {
            if (v[j] < v[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the found minimum element with the first element
        swap(v[i], v[minIndex]);
    }
}

int main() {
    vector<int> v = {64, 25, 12, 22, 11};

    // Sorting the vector
    selectionSort(v);

    cout << "Sorted array: ";
    for (auto i : v)
        cout << i << " ";

    return 0;
}
