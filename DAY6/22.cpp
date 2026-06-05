#include <iostream>
using namespace std;

int main() {
    long long binary;
    cout<<"enter the number : ";
    cin >> binary;

    int decimal = 0;
    int power = 1;

    while(binary > 0) {
        int digit = binary % 10;

        decimal += digit * power;

        power *= 2;
        binary /= 10;
    }

    cout << decimal;
    return 0;
}