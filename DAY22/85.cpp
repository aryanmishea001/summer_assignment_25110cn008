#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    
    cout << "Enter a string: ";
    cin >> str;

    bool palindrome = true;

    for(int i = 0; i < str.length() / 2; i++) {
        if(str[i] != str[str.length() - 1 - i]) {
            palindrome = false;
            break;
        }
    }

    if(palindrome)
        cout << "Palindrome String";
    else
        cout << "Not a Palindrome String";

    return 0;
}