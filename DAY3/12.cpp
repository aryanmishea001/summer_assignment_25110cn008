/*Write a program to Find LCM of two numbers*/
#include<iostream>
using namespace std;
int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    int maxNum = (a>b)?a:b;
    int lcm = maxNum;
    while(true) {
        if(lcm % a == 0 && lcm % b == 0) {
            break;
        }
        lcm++;
    }
    cout << "LCM = " << lcm;
    return 0;
}