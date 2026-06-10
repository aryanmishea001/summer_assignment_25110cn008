#include<iostream>
using namespace std;

int main() {
    int n = 5;

    for(int i = 1; i <= n; i++) {

        // Spaces
        for(int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // Increasing characters
        for(char ch = 'A'; ch < 'A' + i; ch++) {
            cout << ch;
        }

        // Decreasing characters
        for(char ch = 'A' + i - 2; ch >= 'A'; ch--) {
            cout << ch;
        }

        cout << endl;
    }

    return 0;
}