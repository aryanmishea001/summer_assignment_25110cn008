#include <iostream>
#include <set>
using namespace std;

int main() {
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {3, 4, 5, 6};

    int n = 4, m = 4;

    set<int> s;

    for (int i = 0; i < n; i++) {
        s.insert(arr1[i]);
    }

    for (int i = 0; i < m; i++) {
        s.insert(arr2[i]);
    }

    cout << "Union: ";
    for (int x : s) {
        cout << x << " ";
    }

    return 0;
}