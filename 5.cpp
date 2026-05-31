/*Write a program to Find sum of digits of a
number*/
#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int sum =0;
    while (n>0) {
        sum=sum + (n %10); // Extract last digit and add to sum
        n = n/10;           // Remove last digit
    }
    cout<<"the Sum of digits of the number is = "<<sum;
    return 0;
}