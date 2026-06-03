/*Write a program to Find nth Fibonacci term*/
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    int first = 0, second = 1;
    int fibonacci;
    for (int i = 2; i <= n; i++) {
        fibonacci = first + second;
        first = second;
        second = fibonacci;
    }
    cout << "The " << n << "th Fibonacci term is: " << fibonacci;
    return 0;
}