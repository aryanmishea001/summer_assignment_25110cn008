/*Write a program to Print Armstrong numbers
in a range.*/
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int start, end;
    cout << "Enter the starting number: ";
    cin >> start;
    cout << "Enter the ending number: ";
    cin >> end;
    cout << "Armstrong numbers between " << start << " and " << end << " are:\n";
    for (int num = start; num <= end; num++) {
        int originalNum = num;
        int temp = num;
        int digits = 0;
        int sum = 0;
        while (temp != 0) {
            digits++;
            temp /= 10;
        }
        temp = num;
        while (temp != 0) {
            int digit = temp % 10;
            sum += pow(digit, digits);
            temp /= 10;
        }
        if (sum == originalNum) {
            cout << originalNum << " ";
        }
    }
    return 0;
}