/*Write a program to Find product of digits.*/
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int product =1;
    while (n>0) {
        int digit = n % 10;   
        product = product*digit;
        n =n / 10;           
    }
    cout<< "The Product of digits of the number is  = "<< product;
    return 0;
}