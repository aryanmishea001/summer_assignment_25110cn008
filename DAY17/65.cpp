#include <iostream>
using namespace std;

int main() {
    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6};

    int n = 3, m = 3;
    int merged[n + m];

    for (int i = 0; i < n; i++) {
        merged[i] = arr1[i];
    }

    for (int i = 0; i < m; i++) {
        merged[n + i] = arr2[i];
    }

    cout << "Merged Array: ";
    for (int i = 0; i < n + m; i++) {
        cout << merged[i] << " ";
    }

    return 0;
}