#include <iostream>
using namespace std;

int main() {
    int arr1[] = {10, 20, 30, 40, 50};
    int arr2[] = {30, 40, 60, 70};

    int n = 5, m = 4;

    cout << "Common Elements: ";

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
            }
        }
    }

    return 0;
}