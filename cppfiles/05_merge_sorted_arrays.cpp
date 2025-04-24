#include <iostream>
using namespace std;

int main() {
    int a[100], b[100], c[200], m, n, i = 0, j = 0, k = 0;

    cout << "Enter size of first array: ";
    cin >> m;
    cout << "Enter sorted elements:\n";
    for (int x = 0; x < m; ++x)
        cin >> a[x];

    cout << "Enter size of second array: ";
    cin >> n;
    cout << "Enter sorted elements:\n";
    for (int x = 0; x < n; ++x)
        cin >> b[x];

    while (i < m && j < n) {
        c[k++] = (a[i] < b[j]) ? a[i++] : b[j++];
    }
    while (i < m) c[k++] = a[i++];
    while (j < n) c[k++] = b[j++];

    cout << "Merged array:\n";
    for (int x = 0; x < k; ++x)
        cout << c[x] << " ";
    return 0;
}