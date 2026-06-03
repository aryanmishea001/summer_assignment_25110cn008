/*Write a program to Check Armstrong number.*/
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int num, originalNum, digits = 0;
    int remainder;
    int result = 0;
    cout << "Enter a number: ";
    cin >> num;
    originalNum = num;
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        digits++;
    }
    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        result += pow(remainder, digits);
        temp /= 10;
    }
    if (result == originalNum)
        cout << originalNum << " is an Armstrong number.";
    else
        cout << originalNum << " is not an Armstrong number.";

    return 0;
}
