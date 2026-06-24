#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;

    cout << "Enter first string: ";
    cin >> str1;

    cout << "Enter second string: ";
    cin >> str2;

    if (str1.length() != str2.length()) {
        cout << "Not a Rotation";
        return 0;
    }

    string temp = str1 + str1;

    if (temp.find(str2) != string::npos)
        cout << "Rotation String";
    else
        cout << "Not a Rotation";

    return 0;
}