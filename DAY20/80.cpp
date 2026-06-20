#include <iostream>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;

    int A[r][c];

    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            cin >> A[i][j];

    for(int j = 0; j < c; j++) {
        int sum = 0;
        for(int i = 0; i < r; i++)
            sum += A[i][j];

        cout << "Sum of Column " << j + 1 << " = " << sum << endl;
    }

    return 0;
}