#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string s) {
    string rev = "";
    for (int i = s.length() - 1; i >= 0; i--) {
        rev += s[i];
    }
  return s == rev;
}

int main() {
    string s;
    cin >> s;
    if (isPalindrome(s))
        cout << "true";
    else
        cout << "false";

    return 0;
}