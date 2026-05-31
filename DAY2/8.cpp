/*Write a program to Check whether a number is
palindrome*/
#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int number= n;
    int rev= 0;
    while (n > 0) {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n= n / 10;
    }
    if (number==rev) {
        cout<< "It is a Palindrome Number";
    } else {
        cout<<"It is Not a Palindrome Number";
    }
    return 0;
}