#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string str) {
    int left = 0;
    int right = str.length() - 1;
    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }

    return true;
}
int main() {
    string s = "babad";
    string longest = "";
    for (int i = 0; i < s.length(); i++) {
        for (int j = i; j < s.length(); j++) {
            string sub = s.substr(i, j - i + 1);
            if (isPalindrome(sub) && sub.length() > longest.length()) {
                longest = sub;
            }
        }
    }
    cout << "Longest Palindromic Substring: " << longest;
    return 0;
}