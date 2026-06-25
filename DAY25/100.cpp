#include <iostream>
#include <algorithm>
using namespace std;

bool compare(string a, string b) {
    return a.length() < b.length();
}

int main() {
    string words[] = {"apple", "hi", "computer", "cat", "programming"};
    int n = 5;

    sort(words, words + n, compare);

    cout << "Words Sorted by Length:\n";
    for (int i = 0; i < n; i++)
        cout << words[i] << endl;

    return 0;
}