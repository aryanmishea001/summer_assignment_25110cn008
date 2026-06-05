#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter the number : ";
    cin >> n;

    if(n == 0) {
        cout << 0;
        return 0;
    }

    long long binary = 0;
    int place = 1;

    while(n > 0) {
        int bit = n % 2;
        binary += bit * place;
        place *= 10;
        n /= 2;
    }

    cout << binary;
    return 0;
}