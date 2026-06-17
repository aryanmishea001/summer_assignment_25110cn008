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

    cout << "Intersection: ";

    for (int i = 0; i < m; i++) {
        if (s.find(arr2[i]) != s.end()) {
            cout << arr2[i] << " ";
            s.erase(arr2[i]); // avoid duplicates
        }
    }

    return 0;
}