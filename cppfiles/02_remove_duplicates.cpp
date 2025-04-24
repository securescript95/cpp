#include <iostream>
using namespace std;

int main() {
    int n, k = 0;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n], unique[n];

    cout << "Enter elements:\n";
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    for (int i = 0; i < n; ++i) {
        bool found = false;
        for (int j = 0; j < k; ++j)
            if (arr[i] == unique[j])
                found = true;
        if (!found)
            unique[k++] = arr[i];
    }

    cout << "Array after removing duplicates:\n";
    for (int i = 0; i < k; ++i)
        cout << unique[i] << " ";
    return 0;
}