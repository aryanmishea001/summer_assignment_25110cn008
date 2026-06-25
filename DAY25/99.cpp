#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string names[] = {"Aryan", "Rohit", "Aman", "Vikas", "Neha"};
    int n = 5;

    sort(names, names + n);

    cout << "Names in Alphabetical Order:\n";
    for (int i = 0; i < n; i++)
        cout << names[i] << endl;

    return 0;
}