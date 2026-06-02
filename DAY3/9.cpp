/*Write a program to Check whether a number is
prime.*/
#include<iostream>
using namespace std;
bool Prime(int n) {
    if(n<=1) {
        return false;
    }
    for(int i = 2; i < n; i++) {
        if(n%i==0) {
            return false;
        }
    }
    return true;
}
int main() {
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    if (Prime(n)) {
        cout<<n<<" is  Prime Number";
    }
    else {
        cout<<n<<" is not  Prime Number";
    }
    return 0;
}

