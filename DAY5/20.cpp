/*Write a program to Find largest prime factor*/
#include <iostream>
using namespace std;

int main() {
    long long n;
    long long largestPrime = -1;

    cout << "Enter a number: ";
    cin >> n;

    while(n % 2 == 0) {
        largestPrime = 2;
        n /= 2;
    }

    for(long long i = 3; i * i <= n; i += 2) {
        while(n % i == 0) {
            largestPrime = i;
            n /= i;
        }
    }

    if(n > 2)
        largestPrime = n;

    cout << "Largest Prime Factor = " << largestPrime;

    return 0;
}